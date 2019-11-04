#include "..\Include\TSphere.h"
#include "TPoint3D.h"
#include "TRay.h"
#include "Color.h"


TSphere::TSphere()
{
	
}


TSphere::~TSphere()
{
	
}

TVec3D TSphere::GetNormalAtLocation(TPoint3D _location) const
{
	return TVec3D();
}

TPoint3D TSphere::GetIntersectionLocation(TRay _ray) const
{
	return TPoint3D();
}

Color TSphere::GetColorAtLocation(TPoint3D _location) const
{
	return Color();
}
