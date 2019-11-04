#include "..\Include\Color.h"
#include <algorithm>

// CONST VARS
const int COLOR_MIN = 0;
const int COLOR_MAX = 255;
const float ALPHA_MIN = 0.0f;
const float ALPHA_MAX = 1.0f;

// STATIC VARS
float Color::m_LUM_COEFF[] = { 0.2126f, 0.7152f, 0.0722f };

Color::Color() : m_R(0), m_G(0), m_B(0), m_A(1.0f)
{
}

Color::Color(int _r, int _g, int _b, float _a) : 
	m_R(std::clamp(_r, COLOR_MIN, COLOR_MAX)), 
	m_G(std::clamp(_g, COLOR_MIN, COLOR_MAX)),
	m_B(std::clamp(_b, COLOR_MIN, COLOR_MAX)),
	m_A(std::clamp(_a, ALPHA_MIN, ALPHA_MAX))
{}

Color::Color(float _r, float _g, float _b, float _a) :
		m_R(static_cast<float>(_r)),
		m_G(static_cast<float>(_g)),
		m_B(static_cast<float>(_b)),
		m_A(_a)
{}

Color::Color(const Color & _other) : Color(_other.m_R, _other.m_G, _other.m_B, _other.m_A)
{}

Color::~Color()
{}

float Color::Luminance() const
{
	return m_R * m_LUM_COEFF[0] + m_G * m_LUM_COEFF[1] + m_B * m_LUM_COEFF[2];
}

Color Color::operator*(const Color & _other)
{
	return Color((m_R * _other.m_R) / 255, (m_G * _other.m_G) / 255, (m_B * _other.m_B) / 255, m_A);
}

Color Color::operator*=(const Color & _other)
{
	return operator=(operator*(_other));
}

Color Color::operator*(const float & _scale)
{
	return Color(m_R * _scale, m_G * _scale, m_B * _scale);
}

Color Color::operator*=(const float & _scale)
{
	return operator=(operator*(_scale));
}

Color Color::operator/(const float & _scale)
{
	if (_scale != 0.0f) {
		return Color(m_R / _scale, m_G / _scale, m_B / _scale, m_A);
	}
	else {
		return Color(m_R, m_G, m_B, m_A);
	}
}

Color Color::operator/=(const float & _scale)
{
	return operator=(operator/(_scale));
}

Color Color::operator+(const Color & _other)
{
	return Color(m_R + _other.m_R, m_G + _other.m_G, m_B + _other.m_B, m_A);
}

Color Color::operator+=(const Color & _other)
{
	return operator=(operator+(_other));
}

Color Color::operator-(const Color & _other)
{
	return Color(m_R - _other.m_R, m_G - _other.m_G, m_B - _other.m_B, m_A);
}

Color Color::operator-=(const Color & _other)
{
	return operator=(operator-(_other));
}
