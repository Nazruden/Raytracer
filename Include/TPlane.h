#pragma once
#include "IObject.h"
#include "TVec3D.h"
#include "TPoint3D.h"

class TPlane : public IObject
{
private:
	TPoint3D m_Point;
	TVec3D m_Normal;

public:
	// CTORS & DTORS
	TPlane();
	~TPlane();

	// FUNCTIONS
	TVec3D GetNormalAtLocation(TPoint3D _location) const override;
	TPoint3D GetIntersectionLocation(TRay _ray) const override;
	Color GetColorAtLocation(TPoint3D _location) const override;
};

