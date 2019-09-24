#include "Complex.h"

Complex::Complex()
{
	_real = 0.0;
	_imag = 0.0;
}

Complex::Complex( double re, double im)
{
	_real = re;
	_imag = im;

}

Complex();

Complex::Complex( const Complex& z);
{
	_real = z._real;
	_imag = z._imag;
}
double Complex::real() const
{
	return _real;
}
double Complex::imag() const
{
	return _imag;
}

Complex& Complex::operator = (double r)
{
	_real = r;
	_imag = 0;

	return *this;
}
Complex& Complex::operator+= (const Complex& z)
{
	_real += z.real();
	_imag += z.imag();
return *this;
}

Complex& Complex::operator -=( const Complex& z)

{
	_real -= z.real();
	_imag -= z.imag();

	return *this;
}

Complex& Complex::operator *=( const Complex& z)
{
double t_real = ( _real * z.real()) - (_imag * z.imag());
double t_imag = (_imag * z.real()) + ( _real * z.imag());
_real = t_real;
_imag = t_imag;

	return *this;

}

Complex& Complex::operator /= (const Complex& z)
{
	double den = (z.real() * z.real()) + (z.imag() * z.imag());
	
	double t_real = (_real * z.real()) - (_imag * -z.imag());
	double t_imag = (_imag * z.real()) + (_real * -z.imag());
	_real = t_real / den;
	_imag = t_imag / den;

	return *this;
}

Complex& Complex::operator=( const Complex& z)
{
	_real = z.real();
	_imag = z.imag();

	return *this;
}

Complex& Complex::operator+( const Complex& a, const Complex& b)
{
	double rl = a.real() + b.real();
	double img = a.imag() + b.imag();

	Complex total(rl, img);

	return total;
}

Complex& Complex::operator-( const Complex& a, const Complex& b)
{

	double rl = a.real() - b.real();
	double img = a.imag() - b.imag();

	Complex total(rl, img);

	return total;
}

Complex& Complex::operator*( const Complex& a, const Complex& b)
{
	double f = a.real() * b.real();
	double o = a.real() * b.imag();
	double i = b.real() * a.imag();
	double l = -1 * b.real() * b.imag();

	double img = o + i;
	double rl = f + l;

	Complex total(rl, img);

	return total;
}

Complex& Complex::operator/( const Complex& a, const Complex& b)
{
	double t_first = a.real() * b.real();
	double t_i = a.real() * -1 * b.imag() + b.real * a.imag();
	double t_last = a.imag() * b.imag();

	double b_first = b.real() * b.real();
	double b_last = b.imag() * b.imag();

	double t_reals = t_first + t_last;
	double t_imags = t_i;
	double bottom = b_first + b_last;

	double rl = top_reals / bottom;
	double img = top_imags / bottom;

	Complex total(rl, img);

	return total;
}

double norm (const Complex& z)
{
	double total = z.real() * z.real + z.imag() z.imag();

	return total;
}

Complex conj(const Complex& z);
{
	Complex(z.real(), -(z.imag()));
	return total


bool operator==(const Complex& a, const Complex& b);
	{
		if((a.real() == b.real()) && (a.imag() == b.imag()))
			return true;
		else
			return false;
	}
bool operator==(const Complex& a, double r);
{
	if(a.real() == r && a.imag() == 0)
		return true
	else
		return false;
}

bool operator!=(const Complex& a, const Complex& b);
	{
		if((a.real() != b.real()) && (a.imag() != b.imag()))
			return true;
		else
			return false;
	}

bool operator!=(const Complex& a, double r);
{
	if(a.real() != r && a.imag() != 0)
		return true
	else
		return false;
}


std::ostream& operator<<(std::ostream& out, const Complex& z);
{
	out << z.real() << (z.imag() >0? "+": " " << z.imag();

			return out:
}

