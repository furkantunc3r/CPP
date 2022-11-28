#include "Fixed.hpp"

Fixed::Fixed()
{
	this->num = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->num = val * (1 << this->bit);
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	this->num = roundf(val * (float)(1 << this->bit));
}

Fixed &Fixed::operator=(const Fixed &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->num = f.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &obj, const Fixed &f)
{
	return obj << f.toFloat();
}

float Fixed::toFloat(void) const
{
	return ((float)this->num / (float)(1 << this->bit));
}

int Fixed::toInt(void) const
{
	return (this->num / (1 << this->bit));
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->num;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->num = raw;
}

bool Fixed::operator>(const Fixed &a)
{
	if (this->toFloat() > a.toFloat())
		return 1;
	return 0;
}

bool Fixed::operator<(const Fixed &a)
{
	if (this->toFloat() < a.toFloat())
		return 1;
	return 0;
}

bool Fixed::operator>=(const Fixed &a)
{
	if (this->toFloat() >= a.toFloat())
		return 1;
	return 0;
}

bool Fixed::operator<=(const Fixed &a)
{
	if (this->toFloat() <= a.toFloat())
		return 1;
	return 0;
}

bool Fixed::operator==(const Fixed &a)
{
	if (this->toFloat() == a.toFloat())
		return 1;
	return 0;
}

bool Fixed::operator!=(const Fixed &a)
{
	if (this->toFloat() != a.toFloat())
		return 1;
	return 0;
}

float Fixed::operator+(const Fixed &a)
{
	return this->toFloat() + a.toFloat();
}

float Fixed::operator-(const Fixed &a)
{
	return this->toFloat() - a.toFloat();
}

float Fixed::operator*(const Fixed &a)
{
	return this->toFloat() * a.toFloat();
}

float Fixed::operator/(const Fixed &a)
{
	return this->toFloat() / a.toFloat();
}

Fixed Fixed::operator++(void)
{
	Fixed temp;
	temp.num = ++this->num;
	return temp;
}

Fixed Fixed::operator++(int)
{
	Fixed temp;
	temp.num = this->num++;
	return temp;
}

Fixed Fixed::operator--(void)
{
	Fixed temp;
	temp.num = --this->num;
	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed temp;
	temp.num = this->num--;
	return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return b;
	return a;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return b;
	return a;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return a;
	return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return a;
	return b;
}