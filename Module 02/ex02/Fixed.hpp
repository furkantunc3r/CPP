#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int num;
	static const int bit = 8;
public:
	Fixed();
	Fixed(const Fixed& f);
	Fixed& operator=(const Fixed& f);
	Fixed(const int val);
	Fixed(const float val);
	~Fixed();
	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
	bool operator>(const Fixed& a);
	bool operator<(const Fixed& a);
	bool operator>=(const Fixed& a);
	bool operator<=(const Fixed& a);
	bool operator==(const Fixed& a);
	bool operator!=(const Fixed& a);

	float operator+(const Fixed& a);
	float operator-(const Fixed& a);
	float operator*(const Fixed& a);
	float operator/(const Fixed& a);

	Fixed operator++(void);
	Fixed operator++(int);
	Fixed operator--(void);
	Fixed operator--(int);

	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& obj, const Fixed& f);

#endif