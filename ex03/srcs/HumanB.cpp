/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:58:36 by plau              #+#    #+#             */
/*   Updated: 2023/04/11 17:52:31 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->weapon = NULL;
	std::cout << CYAN << "(" << this->_name << " with no weapon has been created)" << RESET << std::endl;
}

// HumanB::HumanB(std::string name, Weapon &weaponType)
// {
// 	this->_name = name;
// 	this->weapon = &weaponType;
// 	std::cout << CYAN << "(A humanB with weapon has been created)" << RESET << std::endl;
// }

/* Destructor function */
HumanB::~HumanB(void)
{
	std::cout << CYAN << "(" << this->_name << " has been destroyed)" << RESET << std::endl;
}

/* Attach function for HumanB class */
void	HumanB::attack(void)
{
	if (weapon == NULL)
		std::cout << _name << " does not have a weapon to attack with" << std::endl;
	else
		std::cout << _name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &new_weapon)
{
	this->weapon = &new_weapon;
}
