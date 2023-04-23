#pragma once
#include "Vector3D.h"

namespace Apostle
{
	class LinearAlgebra {
	public:
		static Vector3D crossProduct(const Vector3D& v1, const Vector3D& v2);
		static void normalize(Vector3D& v);
		static float getMag(const Vector3D& v);
	};
}