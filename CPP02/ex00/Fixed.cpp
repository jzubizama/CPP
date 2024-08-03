/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzubizar <jzubizar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:42:51 by jzubizar          #+#    #+#             */
/*   Updated: 2023/12/21 17:52:16 by jzubizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

void	Fixed::setRawBits (int const raw)
{
	this->_num = raw;
	return;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_num);
}

Fixed::Fixed (void)
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
	return;
}

Fixed::Fixed (const Fixed &fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
	return;
}

Fixed::~Fixed (void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed & Fixed::operator = (const Fixed &fix)
{
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(fix.getRawBits());
	return (*this);
}