#pragma once

class Color
{
private:
	int m_R;
	int m_G;
	int m_B;
	float m_A;

	static float m_LUM_COEFF[3];

public:
	// CTORS & DTORS
	Color();
	Color(int _r, int _g, int _b, float _a = 1.0f);
	Color(float _r, float _g, float _b, float _a = 1.0f);
	Color(const Color &_other);
	~Color();

	// GETTERS
	int R() const { return m_R; };
	int G() const { return m_G; };
	int B() const { return m_B; };
	float A() const { return m_A; };

	// SETTERS
	void SetR(int _red) { m_R = _red; };
	void SetG(int _green) { m_G = _green; };
	void SetB(int _blue) { m_B = _blue; };
	void SetA(float _alpha) { m_A = _alpha; };
	void Set(const Color &_other) { operator=(_other); };

	// FUNCTIONS
	float Luminance() const;

	// OPERATORS
	Color operator*(const Color & _other);
	Color operator*=(const Color & _other);
	Color operator*(const float & _scale);
	Color operator*=(const float & _scale);
	Color operator/(const float & _scale);
	Color operator/=(const float & _scale);
	Color operator+(const Color & _other);
	Color operator+=(const Color & _other);
	Color operator-(const Color & _other);
	Color operator-=(const Color & _other);

};