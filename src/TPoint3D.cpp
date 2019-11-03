#include "..\Include\TPoint3D.h"



TPoint3D::TPoint3D() : m_X(0.0f), m_Y(0.0f), m_Z(0.0f)
{}

TPoint3D::TPoint3D(float _x, float _y, float _z) : m_X(_x), m_Y(_y), m_Z(_z)
{}

TPoint3D::TPoint3D(int _x, int _y, int _z) : TPoint3D((float)_x, (float)_y, (float)_z)
{}

TPoint3D::TPoint3D(const TPoint3D & _other) : TPoint3D(_other.m_X, _other.m_Y, _other.m_Z)
{}

TPoint3D::~TPoint3D()
{}

float TPoint3D::X() const
{
	return m_X;
}
 
float TPoint3D::Y() const
{
	return m_Y;
}

float TPoint3D::Z() const
{
	return m_Z;
}
