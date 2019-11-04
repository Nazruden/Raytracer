#include "..\Include\TPlane.h"
#include "Color.h"
#include "TRay.h"


TPlane::TPlane()
{
}


TPlane::~TPlane()
{
}

TVec3D TPlane::GetNormalAtLocation(TPoint3D _location) const
{
	return TVec3D();
}

TPoint3D TPlane::GetIntersectionLocation(TRay _ray) const
{
	return TPoint3D();
}

Color TPlane::GetColorAtLocation(TPoint3D _location) const
{
	return Color();
}
