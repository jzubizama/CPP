/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzubizar <jzubizar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:52:56 by jzubizar          #+#    #+#             */
/*   Updated: 2024/01/09 17:52:56 by jzubizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	input;
    PhoneBook	pb;

	while (1)
	{
		std::cout << "***************\nChoose an action: ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin >> std::ws, input);
		if (!input.compare("ADD"))
			pb.add();
		else if (!input.compare("SEARCH"))
			pb.search();
		else if (!input.compare("EXIT"))
			break ;
	}
	return (0);
}
