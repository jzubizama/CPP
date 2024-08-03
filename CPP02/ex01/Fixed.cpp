/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josu <josu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:42:51 by jzubizar          #+#    #+#             */
/*   Updated: 2023/12/24 18:14:22 by josu             ###   ########.fr       */
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
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_num);
}

Fixed::Fixed (void)
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
	return;
}

Fixed::Fixed(const int i)
{
	std::cout << "Integer constructor called" << std::endl;
	setRawBits(i << _w);
	return;
}

Fixed::Fixed (const float f)
{
	std::cout << "Float constructor called" << std::endl;
	int		int_part = std::roundf( f * ( 1 << this->_w ) );

	setRawBits(int_part);
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

int		Fixed::toInt(void) const
{
	return (this->_num >> this->_w);
}

float		Fixed::toFloat(void) const
{
	return ((float)this->_num / (float)(1 << this->_w));
}

std::ostream	&operator<<(std::ostream &stream, Fixed const &f)
{
	stream << f.toFloat();
	return (stream);
}