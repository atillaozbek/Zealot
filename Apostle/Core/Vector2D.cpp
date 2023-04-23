#include "Vector2D.h"

Vector2D::Vector2D(float x, float y) : x(x), y(y) {

}

Vector2D::Vector2D(const Vector2D& other) : x(other.x), y(other.y) {

}

Vector2D Vector2D::operator+(const Vector2D& other) const {
	return Vector2D(x + other.x, y + other.y);
}

Vector2D Vector2D::operator-(const Vector2D& other) const {
	return Vector2D(x - other.x, y - other.y);
}
