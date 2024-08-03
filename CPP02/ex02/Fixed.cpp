/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josu <josu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:42:51 by jzubizar          #+#    #+#             */
/*   Updated: 2023/12/25 21:37:12 by josu             ###   ########.fr       */
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

bool	Fixed::operator > (const Fixed &fix) const
{
	std::cout << "Checking if " << this->_num << " > " << fix.getRawBits() << std::endl;
	if (this->_num > fix.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator >= (const Fixed &fix) const
{
	std::cout << "Checking if " << this->_num << " >= " << fix.getRawBits() << std::endl;
	if (this->_num >= fix.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator < (const Fixed &fix) const
{
	std::cout << "Checking if " << this->_num << " < " << fix.getRawBits() << std::endl;
	if (this->_num < fix.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator <= (const Fixed &fix) const
{
	std::cout << "Checking if " << this->_num << " <= " << fix.getRawBits() << std::endl;
	if (this->_num <= fix.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator == (const Fixed &fix) const
{
	std::cout << "Checking if " << this->_num << " == " << fix.getRawBits() << std::endl;
	if (this->_num == fix.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator != (const Fixed &fix) const
{
	std::cout << "Checking if " << this->_num << " != " << fix.getRawBits() << std::endl;
	if (this->_num != fix.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator + (const Fixed &fix) const
{
	std::cout << "Summing results" << std::endl;
	Fixed	temp;

	temp.setRawBits(this->_num + fix.getRawBits());
	return (temp);
}

Fixed	Fixed::operator - (const Fixed &fix) const
{
	std::cout << "Resting results" << std::endl;
	Fixed	temp;

	temp.setRawBits(this->_num - fix.getRawBits());
	return (temp);
}

Fixed	Fixed::operator * (const Fixed &fix) const
{
	std::cout << "Multiplying results" << std::endl;
	float	fl = this->toFloat() * fix.toFloat();
	return (Fixed(fl));
}

Fixed	Fixed::operator / (const Fixed &fix) const
{
	std::cout << "Dividing results" << std::endl;
	float	fl = this->toFloat()/fix.toFloat();
	return (Fixed(fl));
}

Fixed	Fixed::operator++(void)
{
	this->_num++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	cpy(*this);
	
	this->_num++;
	return (cpy);
}

Fixed	Fixed::operator -- (void)
{
	this->_num--;
	return (*this);
}

Fixed	Fixed::operator -- (int)
{
	Fixed	cpy(*this);
	
	this->_num--;
	return (cpy);
}

Fixed	&Fixed::min (Fixed &fix1, Fixed &fix2)
{
	if (fix1 <= fix2)
		return (fix1);
	return (fix2);
}

const Fixed	&Fixed::min (const Fixed &fix1, const Fixed &fix2)
{
	if (fix1 <= fix2)
		return (fix1);
	return (fix2);
}

Fixed	&Fixed::max (Fixed &fix1, Fixed &fix2)
{
	if (fix1 >= fix2)
		return (fix1);
	return (fix2);
}

const Fixed	&Fixed::max (const Fixed &fix1, const Fixed &fix2)
{
	if (fix1 >= fix2)
		return (fix1);
	return (fix2);
}
