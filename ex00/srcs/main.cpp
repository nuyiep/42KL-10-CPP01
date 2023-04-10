/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:00:14 by plau              #+#    #+#             */
/*   Updated: 2023/04/10 14:10:17 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*zombie = newZombie("Heap Zombie");
	delete zombie;
	std::cout << std::endl;
	randomChump("Stack Zombie");
	std::cout << std::endl;
}
// system("leaks -q brainz");
