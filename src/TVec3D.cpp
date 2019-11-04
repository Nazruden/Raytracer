#include "..\Include\TVec3D.h"
#include <cmath>


TVec3D::TVec3D() : m_X(0.0f), m_Y(0.0f), m_Z(0.0f)
{}

TVec3D::TVec3D(float _x, float _y, float _z) : m_X(_x), m_Y(_y), m_Z(_z)
{}

TVec3D::TVec3D(int _x, int _y, int _z) : TVec3D(static_cast<float>(_x), static_cast<float>(_y), static_cast<float>(_z))
{}

TVec3D::TVec3D(const TVec3D & _other) : TVec3D(_other.m_X, _other.m_Y, _other.m_Z)
{}

TVec3D::~TVec3D()
{}

float TVec3D::X() const
{
	return m_X;
}

float TVec3D::Y() const
{
	return m_Y;
}

float TVec3D::Z() const
{
	return m_Z;
}

TVec3D TVec3D::GetOpposite() const
{
	return TVec3D(-m_X, -m_Y, -m_Z);
}

TVec3D TVec3D::GetNormalized() const
{
	float Length = Magnitude();
	return TVec3D(m_X / Length, m_Y / Length, m_Z / Length);
}

float TVec3D::Magnitude() const
{
	return std::abs(m_X) + std::abs(m_Y) + std::abs(m_Z);
}

void TVec3D::Normalize()
{
	float Length = Magnitude();
	m_X /= Length;
	m_Y /= Length;
	m_Z /= Length;
}

TVec3D TVec3D::operator*(const TVec3D & _other)
{
	return TVec3D(m_Y * _other.m_Z - m_Z * _other.m_Y, m_Z * _other.m_X - m_X * _other.m_Z, m_X * _other.m_Y - m_Y * _other.m_X);
}

TVec3D TVec3D::operator*(const float & _scale)
{
	return TVec3D(m_X * _scale, m_Y * _scale, m_Z * _scale);
}

TVec3D TVec3D::operator*=(const float & _scale)
{
	return operator=(operator*(_scale));
}

TVec3D TVec3D::operator/(const float & _scale)
{
	return TVec3D(m_X / _scale, m_Y / _scale, m_Z / _scale);
}

TVec3D TVec3D::operator/=(const float & _scale)
{
	return operator=(operator/(_scale));
}

TVec3D TVec3D::operator+(const TVec3D & _other)
{
	return TVec3D(m_X + _other.m_X, m_Y + _other.m_Y, m_Z + _other.m_Z);
}

TVec3D TVec3D::operator+=(const TVec3D & _other)
{
	return operator=(operator+(_other));
}

TVec3D TVec3D::operator-(const TVec3D & _other)
{
	return TVec3D(m_X - _other.m_X, m_Y - _other.m_Y, m_Z- _other.m_Z);
}

TVec3D TVec3D::operator-=(const TVec3D & _other)
{
	return operator=(operator-(_other));
}

TVec3D TVec3D::operator-()
{
	return GetOpposite();
}

bool TVec3D::operator==(const TVec3D & _other)
{
	if (m_X == _other.m_X && m_Y == _other.m_Y && m_Z == _other.m_Z) {
		return true;
	}
	return false;
}

bool TVec3D::operator!=(const TVec3D & _other)
{
	return !operator==(_other);
}
