/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:00:50 by plau              #+#    #+#             */
/*   Updated: 2023/04/13 21:08:38 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "./harlFilter [Warning Level]" << std::endl;
		return (1);
	}
	Harl	grummyHarl;
	grummyHarl.complain(av[1]);
	return (0);
}
