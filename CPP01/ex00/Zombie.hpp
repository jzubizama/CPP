/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzubizar <jzubizar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:11:24 by jzubizar          #+#    #+#             */
/*   Updated: 2024/01/09 19:11:28 by jzubizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>

// ************************************************************************** //
//                               Zombie Class                                //
// ************************************************************************** //

class Zombie {
	private:
		std::string	_name;
	
	public:
		void	announce (void);
		Zombie (std::string name);
		~Zombie (void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif /* __ZOMBIE_H__ */
