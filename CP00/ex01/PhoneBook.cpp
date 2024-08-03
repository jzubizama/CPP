/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzubizar <jzubizar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:50:12 by jzubizar          #+#    #+#             */
/*   Updated: 2024/01/09 18:51:24 by jzubizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(void)
{
	this->_quant = 0;
	return;
}

std::string	PhoneBook::_get_data(std::string data)
{
	std::string	input = "";

	while (input.empty())
	{
		std::cout << data << ": " << std::flush;
		std::getline(std::cin, input);
		if (input.empty())
		{
			std::cout << "Input can not be empty!" << std::endl;
		}
	}
	return (input);
}

void    PhoneBook::add()
{
    Contact cont(_get_data("Name"), _get_data("Last Name"), _get_data("Nickname"), _get_data("Phone"));

    /* cont.name = _get_data("Name");
    cont.lastName = _get_data("Last Name");
    cont.nickname = _get_data("Nickname");
	cont.phone = _get_data("Phone"); */
    if (this->_quant == 7)
    {
        this->_contacts[this->_quant] = cont;
        this->_quant = 0;
    }
    else
    {
        this->_contacts[this->_quant] = cont;
        this->_quant++;
    }
}

void	PhoneBook::_print_comp(std::string comp)
{
	std::cout << std::setw(10);
	if (comp.length() > 10)
		std::cout << comp.erase(7, comp.length() - 7).append(".");
	else
		std::cout << comp;
}
void	PhoneBook::search()
{
	int	i;
	std::string	input = "";

	i = 0;
	while (i < 8 && !_contacts[i].get_name().empty())
	{
		_print_comp(std::to_string(i));
		std::cout << "|";
		_print_comp(_contacts[i].get_name());
		std::cout << "|";
		_print_comp(_contacts[i].get_lastname()); 
		std::cout << "|";
		_print_comp(_contacts[i].get_nickname());
		std::cout << std::endl;
		i++;
	}
	std::cout << "Which index would you like to check?\n";
	std::getline(std::cin, input);
	if (!input.empty() && stoi(input) >= 0 && stoi(input) < i)
	{
		_contacts[stoi(input)].print_cont();
	}
	else
		std::cout << "Not such a possible Index!\n";
}
