#pragma once
#include <iostream>

class TVec3D
{
private:
	// MEMBER VARIABLES
	float m_X;
	float m_Y;
	float m_Z;

public:
	// CTORS & DTORS
	TVec3D();
	TVec3D(float _x, float _y, float _z);
	TVec3D(int _x, int _y, int _z);
	TVec3D(const TVec3D & _other);
	~TVec3D();

	// GETTERS
	float X() const;
	float Y() const;
	float Z() const;

	// FUNCTIONS
	TVec3D GetOpposite() const;
	TVec3D GetNormalized() const;
	float Magnitude() const;

	// METHODS
	void Normalize();

	// OPERATORS
	TVec3D operator*(const TVec3D & _other);
	TVec3D operator*(const float & _scale);
	TVec3D operator*=(const float & _scale);
	TVec3D operator/(const float & _scale);
	TVec3D operator/=(const float & _scale);
	TVec3D operator+(const TVec3D & _other);
	TVec3D operator+=(const TVec3D & _other);
	TVec3D operator-(const TVec3D & _other);
	TVec3D operator-=(const TVec3D & _other);
	TVec3D operator-();
	bool operator==(const TVec3D & _other);
	bool operator!=(const TVec3D & _other);
};

inline std::ostream& operator<<(std::ostream& _os, const TVec3D & _vec3D) {
	_os << "X:" << _vec3D.X() << " | Y:" << _vec3D.Y() << " | Z:" << _vec3D.Z() << std::endl;
	return _os;
}
