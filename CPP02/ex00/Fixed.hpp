/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzubizar <jzubizar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:42:20 by jzubizar          #+#    #+#             */
/*   Updated: 2023/12/21 17:54:55 by jzubizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include<iostream>

class Fixed{
	private:
		int					_num;
		static const int	_w = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &fix);
		~Fixed(void);
		Fixed & operator = (const Fixed &fix);
		int		getRawBits(void) const;
		void	setRawBits (int const raw);
};

#endif