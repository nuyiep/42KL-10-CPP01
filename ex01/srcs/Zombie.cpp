/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 14:45:21 by plau              #+#    #+#             */
/*   Updated: 2023/04/10 17:37:32 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Setter function: set zombie name */
void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::setIndex(int index)
{
	this->_index = index;
}

Zombie::Zombie(void)
{
	std::cout << "A new zombie " << " has spwaned" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << _name << "[" << _index << "] " << "has despawned" << std::endl;
}

int		Zombie::getIndex(void) const
{
	return (this->_index);
}

/* Zombie will annouce themselves */
void	Zombie::annouce(void)
{
	std::cout << "I belong to the group of " << _name << "'s " << _index <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}

