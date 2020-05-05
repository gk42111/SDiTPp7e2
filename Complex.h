#pragma once
class Complex
{
public:
	double Re;
	double Im;
	Complex();
	Complex(double, double);
	~Complex();
	friend Complex operator+(const Complex&, const Complex&);
	friend Complex operator*(const Complex&, const Complex&);
	friend Complex operator-(const Complex&, const Complex&);
	friend Complex operator/(const Complex&, const Complex&);
};


