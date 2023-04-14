/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 19:32:45 by plau              #+#    #+#             */
/*   Updated: 2023/04/13 22:30:08 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/* Default constructor function */
/* Not used in this case */
Weapon::Weapon(void)
{
	std::cout << BLUE << "(" << this->_type << " has been created- default constructor)" << RESET << std::endl;
}

/* Constructor function with parameter */
/* Good practice to use this-> */
Weapon::Weapon(std::string name)
{
	this->_type = name;
	std::cout << BLUE << '(' << this->_type << " has been created- with name)" << RESET << std::endl;
}

/* Destructor function */
Weapon::~Weapon(void)
{
	std::cout << BLUE << "(" <<  _type << " [weapon] has been destroyed" << ")" << RESET <<std::endl;
}

/* Setters */
void	Weapon::setType(std::string type)
{
	this->_type = type;
}

/* Getters */
/* Returns a const reference to _type */
/* const -> cannot change the value */
/* ref & -> ref to _type is returned, not a copy of it */
const std::string 	&Weapon::getType(void)
{
	return (this->_type);
}
