#pragma once

class Vector2D {

public:
	float x, y;

	Vector2D(float x, float y);
	Vector2D(const Vector2D& other);
	Vector2D operator+(const Vector2D& other) const;
	Vector2D operator-(const Vector2D& other) const;
};
