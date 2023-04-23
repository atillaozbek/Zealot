#include "LinearAlgebra.h"
#include <corecrt_math.h>

namespace Apostle
{
	Vector3D LinearAlgebra::crossProduct(const Vector3D& v1, const Vector3D& v2) 
	{
		float x = v1.y * v2.z - v1.z * v2.y;
		float y = v1.z * v2.x - v1.x * v2.z;
		float z = v1.x * v2.y - v1.y * v2.x;
		return Vector3D(x, y, z);
	}

	void LinearAlgebra::normalize(Vector3D& v)
	{
		float mag = sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);		
		if (mag > 0.0f) 
		{
			v.x /= mag;
			v.y /= mag;
			v.z /= mag;
		}
	}
	float LinearAlgebra::getMag(const Vector3D& v)
		{
			return sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
		}
}