
#pragma once
#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <iostream>

// ************************************************************************** //
//                               Weapon Class                                //
// ************************************************************************** //

class Weapon {
	private:
		std::string	_type;

	public:
		std::string const &getType(void) const;
		void	setType(std::string newType);
		Weapon (std::string type);
		~Weapon (void);
};


#endif /* __WEAPON_H__ */
