/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:58:40 by plau              #+#    #+#             */
/*   Updated: 2023/04/13 22:53:41 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/* Constructor function */
/* HumanA will store weapon's memory address */
/* Because it is a ref -> any changes in weapon */
/* will be reflected on HumanA's weapon */

/* The part after colon : is called an initialization list */
/* It is used to initialize the member variable of the class */
/* Using initialization lists can result in more efficient code, 
particularly for large objects or objects with many member variables. 
It can also make your code more concise and easier to read, 
as the initialization is separated from the constructor logic. 
However, for small objects or objects with few member variables, 
the difference in performance may be negligible. */
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
