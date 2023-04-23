#pragma once

class Vector3D {

public:	
	float x, y, z;

	Vector3D(float x, float y, float z);
	Vector3D(const Vector3D& other);
	Vector3D operator+(const Vector3D& other) const;
	Vector3D operator-(const Vector3D& other) const;
};