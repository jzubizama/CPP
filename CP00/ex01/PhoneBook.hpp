/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzubizar <jzubizar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:46:21 by jzubizar          #+#    #+#             */
/*   Updated: 2024/01/09 18:51:21 by jzubizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include<iostream>
#include"Contact.hpp"

class PhoneBook {
	private:
		std::string _get_data(std::string data);
		void		_print_comp(std::string comp);
        Contact		_contacts[8];
        int			_quant;
    public:
		PhoneBook(void);
		void	add();
		void	search();
};


#endif