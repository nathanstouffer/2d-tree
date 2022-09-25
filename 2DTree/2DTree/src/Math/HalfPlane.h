#ifndef __HALF_PLANE_H__
#define __HALF_PLANE_H__

#include <cmath>

#include "Vec2.h"

namespace Math
{

	class HalfPlane
	{
	private:

		Vec2 mPoint;
		Vec2 mNormal;

	public:

		HalfPlane(Vec2 const& point, Vec2 const& normal);

		// pretty simple class, so just use compiler generated destructor, move/copy constructors/assignments

		float signedDist(Vec2 const& point) const;
		inline float dist(Vec2 const& point) const { return std::abs(signedDist(point)); }

	};

}

#endif