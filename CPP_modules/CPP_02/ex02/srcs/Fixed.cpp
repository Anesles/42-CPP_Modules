/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:23:34 by brumarti          #+#    #+#             */
/*   Updated: 2023/12/19 16:20:41 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed(void) : _FixedPoint(0)
{
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value)
{
    //std::cout << "Int constructor called" << std::endl;
    this->_FixedPoint = value << this->_FractionalBits;
}

Fixed::Fixed(float const value)
{
    //std::cout << "Float constructor called" << std::endl;
    this->_FixedPoint = roundf(value * (1 << this->_FractionalBits));
}

Fixed::Fixed(Fixed const &other)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed(void)
{
    //std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &other)
{
    //std::cout << "Copy assignment operator called"<< std::endl;
    this->_FixedPoint = other.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return (this->_FixedPoint);
}

void Fixed::setRawBits(int const raw)
{
    //std::cout << "setRawBits member function called" << std::endl;
    this->_FixedPoint = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)this->_FixedPoint / (float)(1 << this->_FractionalBits));
}

int Fixed::toInt(void) const
{
    return (this->_FixedPoint >> this->_FractionalBits);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}

bool operator>(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() > b.getRawBits());
}

bool operator<(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() < b.getRawBits());
}

bool operator>=(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() >= b.getRawBits());
}

bool operator<=(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() <= b.getRawBits());
}

bool operator==(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() == b.getRawBits());
}

bool operator!=(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() != b.getRawBits());
}

Fixed operator+(Fixed const &a, Fixed const &b)
{
	return (Fixed(a.toFloat() + b.toFloat()));
}

Fixed operator-(Fixed const &a, Fixed const &b)
{
	return (Fixed(a.toFloat() - b.toFloat()));
}

Fixed operator*(Fixed const &a, Fixed const &b)
{
	return (Fixed(a.toFloat() * b.toFloat()));
}

Fixed operator/(Fixed const &a, Fixed const &b)
{
	return (Fixed(a.toFloat() / b.toFloat()));
}

Fixed &Fixed::operator++(void)
{
	this->_FixedPoint++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed &Fixed::operator--(void)
{
	this->_FixedPoint--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}