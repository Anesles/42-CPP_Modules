/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:17:59 by brumarti          #+#    #+#             */
/*   Updated: 2023/12/19 15:23:16 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
private:
    int _FixedPoint;
    static const int _FractionalBits = 8;
public:
    Fixed();
    Fixed(Fixed const &other);
    ~Fixed();
    Fixed &operator=(Fixed const &other);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};
