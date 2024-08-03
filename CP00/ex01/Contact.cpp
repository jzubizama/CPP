/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzubizar <jzubizar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:52:04 by jzubizar          #+#    #+#             */
/*   Updated: 2024/01/09 18:50:36 by jzubizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Contact.hpp"

Contact::Contact(void)
{
	return;
}

Contact::Contact(std::string	name, std::string	lastName, std::string	nickname, std::string	phone)
{
	this->_name = name;
	this->_lastName = lastName;
	this->_nickname = nickname;
	this->_phone = phone;
	return;
}

void	Contact::print_cont()
{
	std::cout << _name << " - " << _lastName << " - " << _nickname;
	std::cout << " - " << _phone << std::endl;
}

std::string Contact::get_name(void) const{ return (this->_name);}

std::string Contact::get_lastname(void) const{ return (this->_lastName);}

std::string Contact::get_nickname(void) const{ return (this->_nickname);}

std::string Contact::get_phone(void) const{ return (this->_phone);}

