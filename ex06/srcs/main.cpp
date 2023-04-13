/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:00:50 by plau              #+#    #+#             */
/*   Updated: 2023/04/13 20:45:46 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please enter the log level" << std::endl;
		return (1);
	}
	Harl	Harl;
	std::string level_list[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	int		level = 0;
	while (level < 4)
	{
		if (level_list[level] == av[1])
			break;
		level++;
	}
	switch (level)
	{
		case 0:
			Harl.complain("DEBUG");
		case 1:
			Harl.complain("INFO");
		case 2:
			Harl.complain("WARNING");
		case 3:
			Harl.complain("ERROR");
			break;
		default :
			std::cout << BRIGHT_CYAN << "[ Probably complaining about " <<
			"insignificant problems ]" << RESET << std::endl;
	}	
	return (0);
}
