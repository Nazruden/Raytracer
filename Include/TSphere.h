#pragma once
#include "IObject.h"
#include "TVec3D.h"

class TSphere : public IObject
{
private:
	TVec3D m_Origin;
	float m_Radius;

public:
	// CTORS & DTORS
	TSphere();
	~TSphere();

	// FUNCTIONS
	TVec3D GetNormalAtLocation(TPoint3D _location) const override;
	TPoint3D GetIntersectionLocation(TRay _ray) const override;
	Color GetColorAtLocation(TPoint3D _location) const override;
};

