#include "Vec2.h"

#include <cmath>

namespace Math
{

	Vec2::Vec2(float x, float y) : x(x), y(y) {}

	float Vec2::length() const
	{
		return std::sqrt(dot(*this, *this));
	}

	Vec2 Vec2::operator-() const
	{
		return { -x, -y };
	}

	Vec2 Vec2::operator+(Vec2 const& other) const
	{
		return Vec2{ x + other.x, y + other.y };
	}

	Vec2 Vec2::operator-(Vec2 const& other) const
	{
		return *this + -other;
	}

	Vec2 Vec2::operator*(float scalar) const
	{
		return Vec2{ scalar * x, scalar * y };
	}

	Vec2 Vec2::operator/(float scalar) const
	{
		return (1.f / scalar) * (*this);
	}

	Vec2 Vec2::normalized() const
	{
		return (*this) / length();
	}

	float dot(Vec2 const& a, Vec2 const& b)
	{
		return a.x * b.x + a.y * b.y;
	}

	Vec2 operator*(float scalar, Vec2 const& a)
	{
		return a * scalar;
	}

}