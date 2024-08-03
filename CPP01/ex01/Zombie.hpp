
#pragma once
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
		void	announce (void) {
			std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
			return;
		}
		Zombie (void);
		~Zombie (void);
		void	setName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif /* __ZOMBIE_H__ */
