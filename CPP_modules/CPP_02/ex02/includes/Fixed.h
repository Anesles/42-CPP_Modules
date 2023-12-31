/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:17:59 by brumarti          #+#    #+#             */
/*   Updated: 2023/12/19 16:17:34 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int _FixedPoint;
    static const int _FractionalBits = 8;
public:
    Fixed();
    Fixed(int const value);
    Fixed(float const value);
    Fixed(Fixed const &other);
    ~Fixed();
    Fixed &operator=(Fixed const &other);
    
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    
    friend std::ostream &operator<<(std::ostream &out, Fixed const &value);
    friend bool operator>(Fixed const &a, Fixed const &b);
    friend bool operator<(Fixed const &a, Fixed const &b);
    friend bool operator>=(Fixed const &a, Fixed const &b);
    friend bool operator<=(Fixed const &a, Fixed const &b);
    friend bool operator==(Fixed const &a, Fixed const &b);
    friend bool operator!=(Fixed const &a, Fixed const &b);
    
    friend Fixed operator+(Fixed const &a, Fixed const &b);
    friend Fixed operator-(Fixed const &a, Fixed const &b);
    friend Fixed operator*(Fixed const &a, Fixed const &b);
    friend Fixed operator/(Fixed const &a, Fixed const &b);

	Fixed &operator++(void);
	Fixed operator++(int);
	Fixed &operator--(void);
	Fixed operator--(int);

	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);

	static Fixed const &min(Fixed const &a, Fixed const &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);
};