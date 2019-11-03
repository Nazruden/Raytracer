#pragma once
#include "TPoint3D.h"
#include "TVec3D.h"

class TRay
{
private:
	TPoint3D m_Origin;
	TVec3D m_Direction;

public:
	// CTORS & DTORS
	TRay();
	TRay(const TPoint3D & _origin, const TVec3D & _direction);
	~TRay();

	// GETTERS
	TPoint3D Origin();
	TVec3D Direction();
};

