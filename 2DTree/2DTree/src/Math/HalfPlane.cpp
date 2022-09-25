#include "HalfPlane.h"

namespace Math
{

	HalfPlane::HalfPlane(Vec2 const& point, Vec2 const& normal) :
		mPoint(point),
		mNormal(normal.normalized())
	{}

	float HalfPlane::signedDist(Vec2 const& point) const
	{
		return dot(point - mPoint, mNormal);
	}

}