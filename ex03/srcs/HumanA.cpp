/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:58:40 by plau              #+#    #+#             */
/*   Updated: 2023/04/11 17:46:12 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/* Constructor function */
/* HumanA will store weapon's memory address */
/* Because it is a ref -> any changes in weapon */
/* will be reflected on HumanA's weapon */

/* The part after colon : is called an initialization list */
/* It is used to initialize the member variable of the class */
HumanA::HumanA(std::string name, Weapon &new_weapon) : weapon(new_weapon)
{
	this->_name = name;
	std::cout << BLUE << "(" << this->_name << " has been created)" << RESET << std::endl;
}

/* Destructor function */
HumanA::~HumanA(void)
{
	std::cout << BLUE << "(" << this->_name << " has been destroyed)" << RESET << std::endl;
}

/* Attack function for HumanA class */
void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << weapon.getType() << std::endl;
}
