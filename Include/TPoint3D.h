#pragma once

class TPoint3D
{
private:
	float m_X;
	float m_Y;
	float m_Z;

public:
	// CTORS & DTORS
	TPoint3D();
	TPoint3D(float _x, float _y, float _z);
	TPoint3D(int _x, int _y, int _z);
	TPoint3D(const TPoint3D & _other);
	~TPoint3D();

	// GETTERS
	float X() const;
	float Y() const;
	float Z() const;
};

