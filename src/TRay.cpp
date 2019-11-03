#include "..\Include\TRay.h"



TRay::TRay()
{}

TRay::TRay(const TPoint3D & _origin, const TVec3D & _direction) : m_Origin(_origin), m_Direction(_direction)
{}


TRay::~TRay()
{
}

TPoint3D TRay::Origin()
{
	return m_Origin;
}

TVec3D TRay::Direction()
{
	return m_Direction;
}
