/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:36:09 by plau              #+#    #+#             */
/*   Updated: 2023/04/12 22:21:18 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	Harl;
	
	std::cout << "Harl 2.0" << std::endl;
	if (ac == 1)
	{
		Harl.complain("DEBUG");
		Harl.complain("INFO");
		Harl.complain("WARNING");
		Harl.complain("ERROR");
	}
	else if (ac == 2)
	{
		Harl.complain(av[1]);
	}
	else
	{
		std::cout << "Error: Only one input can be taken at a time" << std::endl;
	}
	return (0);
}

