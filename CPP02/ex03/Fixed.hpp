/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josu <josu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:42:20 by jzubizar          #+#    #+#             */
/*   Updated: 2023/12/25 21:36:47 by josu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include<iostream>
#include<cmath>

class Fixed{
	private:
		int					_num;
		static const int	_w = 8;

	public:
		Fixed(void);
		Fixed(const int i);
		Fixed(const float f);
		Fixed(const Fixed &fix);
		~Fixed(void);
		Fixed & operator = (const Fixed &fix);
		int		getRawBits(void) const;
		void	setRawBits (int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		bool	operator > (const Fixed &fix) const;
		bool	operator >= (const Fixed &fix) const;
		bool	operator < (const Fixed &fix) const;
		bool	operator <= (const Fixed &fix) const;
		bool	operator == (const Fixed &fix) const;
		bool	operator != (const Fixed &fix) const;
		Fixed	operator + (const Fixed &fix) const;
		Fixed	operator - (const Fixed &fix) const;
		Fixed	operator * (const Fixed &fix) const;
		Fixed	operator / (const Fixed &fix) const;
		Fixed	operator ++ (void);
		Fixed	operator ++ (int);
		Fixed	operator -- (void);
		Fixed	operator -- (int);
		static Fixed	&min (Fixed &fix1, Fixed &fix2);
		static const Fixed	&min (const Fixed &fix1, const Fixed &fix2);
		static Fixed	&max (Fixed &fix1, Fixed &fix2);
		static const Fixed	&max (const Fixed &fix1, const Fixed &fix2);
};

std::ostream	&operator<<(std::ostream &stream, Fixed const &f);

#endif