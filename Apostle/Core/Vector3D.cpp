#include "Vector3D.h"

Vector3D::Vector3D(float x, float y, float z) : x(x), y(y), z(z) {

}

Vector3D::Vector3D(const Vector3D& other) : x(other.x), y(other.y), z(other.z) {

}

Vector3D Vector3D::operator+(const Vector3D& other) const {
	return Vector3D(x + other.x, y + other.y, z + other.z);
}

Vector3D Vector3D::operator-(const Vector3D& other) const {
	return Vector3D(x - other.x, y - other.y, z - other.z);
}