/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:28:21 by plau              #+#    #+#             */
/*   Updated: 2023/04/08 18:50:33 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	std::cout << this->_zombieName << " has been destroyed" << std::endl;
}

/* Getters */
std::string	Zombie::getZombieName(void)
{
	return (this->_zombieName);
}

std::string	Zombie::newZombie(std::string name)
{
	std::cout << "A new zombie has spawned" << std::endl;
}

void	Zombie::annouce(void)
{
	std::cout << this->_zombieName << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
