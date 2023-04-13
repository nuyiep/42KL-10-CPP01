/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:01:09 by plau              #+#    #+#             */
/*   Updated: 2023/04/13 20:47:07 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << GREEN << "Harl has been created" << RESET << std::endl;
	
}

Harl::~Harl(void)
{
	std::cout << GREEN << "Harl has been destroyed" << RESET << std::endl;	
}

void	Harl::_debug(void)
{
	std::cout << BRIGHT_MAGENTA << "[ DEBUG ] " << RESET
			<< std::endl
			<< "I love having extra bacon for my 7XL-double-"
			<< "cheese-triple-pickle-special-ketchup burger." 
			<< std::endl
			<< "I really do!" 
			<< std::endl
			<< std::endl;
}

void	Harl::_info(void)
{
	std::cout << BRIGHT_MAGENTA << "[ INFO ] " << RESET
			<< std::endl
			<< "I cannot believe adding extra bacon costs more money."
		 	<< std::endl
			<< "You didn’t put enough bacon in my burger! "
		 	<< std::endl
			<< "If you did, I wouldn’t be asking for more! " 
			<< std::endl
			<< std::endl;
}

void	Harl::_warning(void)
{
	std::cout << BRIGHT_MAGENTA << "[ WARNING ] " << RESET
		<< std::endl
		<< "I think I deserve to have some extra bacon for free. "
		<< std::endl
		<< "I’ve been coming for years whereas you started working here "
		<< "since last month." 
		<< std::endl
		<< std::endl; 
}

void	Harl::_error(void)
{
	std::cout << BRIGHT_MAGENTA << "[ ERROR ] " << RESET
			  << std::endl
			  << "This is unacceptable! I want to speak to the manager now."
			  << std::endl
			  << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[4]=
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"	
	};
	fptr complaints[4]=
	{
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error,
	};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*complaints[i])();
			return ;
		}
	}
	return ;	
}
