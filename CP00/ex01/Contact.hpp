/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzubizar <jzubizar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:48:25 by jzubizar          #+#    #+#             */
/*   Updated: 2024/01/09 18:50:13 by jzubizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include<iostream>

class Contact {
    public:
        Contact(void);
        Contact(std::string	name, std::string	lastName, std::string	nickname, std::string	phone);
        void		print_cont();
        std::string get_name(void) const;
        std::string get_lastname(void) const;
        std::string get_nickname(void) const;
        std::string get_phone(void) const;
    private:
        std::string	_name;
        std::string	_lastName;
        std::string	_nickname;
		std::string	_phone;
		
};


#endif