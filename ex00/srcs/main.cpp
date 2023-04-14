/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:00:14 by plau              #+#    #+#             */
/*   Updated: 2023/04/13 22:03:58 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*zombie = newZombie("Heap Zombie");
	delete zombie; //free
	
	std::cout << std::endl;
	randomChump("Stack Zombie");
	std::cout << std::endl;
	// system("leaks -q brainz");
}
