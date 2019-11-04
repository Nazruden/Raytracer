#pragma once
class Color;
class TRay;
class TPoint3D;
class TVec3D;

class IObject
{
public:
	// CTORS & DTORS
	IObject();
	virtual ~IObject();

	// FUNCTIONS
	virtual TVec3D GetNormalAtLocation(TPoint3D _location) const = 0;
	virtual TPoint3D GetIntersectionLocation(TRay _ray) const = 0;
	virtual Color GetColorAtLocation(TPoint3D _location) const = 0;
};

