/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 14:45:19 by plau              #+#    #+#             */
/*   Updated: 2023/04/13 22:14:01 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int	N;
		N = atoi(av[1]);
		if (N < 1)
		{
			std::cout << "Invalid number of zombies" << std::endl;
			return (1);
		}
		Zombie *zombies = zombieHorde(N, av[2]);
		for (int i = 0; i < N; i++)
			zombies[i].annouce();
		delete[] zombies;
	}
	else
	{
		std::cout << "Invalid format" << std::endl;
		std::cout << "Please enter in the following format" << std::endl;
		std::cout << "./horde [Number of zombies] [Zombie horde Name]" << std::endl;
	}
	system("leaks -q horde");
	return (0);
}
