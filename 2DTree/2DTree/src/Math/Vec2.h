#ifndef __VEC_2__
#define __VEC_2__

namespace Math
{

	struct Vec2
	{
		float x;
		float y;

		// constructors
		Vec2(float x, float y);

		// pretty simple struct, so just use compiler generated destructor, move/copy constructors/assignments

		float length() const;

		Vec2 operator-() const;

		Vec2 operator+(Vec2 const& other) const;
		Vec2 operator-(Vec2 const& other) const;

		Vec2 operator*(float scalar) const;
		Vec2 operator/(float scalar) const;

		Vec2 normalized() const;

	};

	float dot(Vec2 const& a, Vec2 const& b);

	Vec2 operator*(float sclar, Vec2 const& a);

}

#endif