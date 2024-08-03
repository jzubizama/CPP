/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josu <josu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:42:20 by jzubizar          #+#    #+#             */
/*   Updated: 2023/12/24 18:09:48 by josu             ###   ########.fr       */
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
};

std::ostream	&operator<<(std::ostream &stream, Fixed const &f);

#endif