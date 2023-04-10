/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:28:21 by plau              #+#    #+#             */
/*   Updated: 2023/04/10 14:00:28 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Constructor */
Zombie::Zombie(std::string name)
{
	this->_zombieName = name; //getter function
	std::cout << "A new zombie '" << name << "' has spawned" << std::endl;
}

/* Destructor */
Zombie::~Zombie(void)
{
	std::cout << _zombieName << " has despawned" << std::endl;
}

void	Zombie::annouce(void)
{
	std::cout << _zombieName << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
