/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:01:09 by plau              #+#    #+#             */
/*   Updated: 2023/04/13 21:05:18 by plau             ###   ########.fr       */
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
	std::string level_list[4]=
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"	
	};
	int		index = 0;
	while (index < 4)
	{
		if (level_list[index] == level)
			break;
		index++;
	}
	switch (index)
	{
		case 0:
			this->_debug();
		case 1:
			this->_info();
		case 2:
			this->_warning();
		case 3:
			this->_error();
			break;
		default :
			std::cout << BRIGHT_CYAN << "[ Probably complaining about " <<
			"insignificant problems ]" << RESET << std::endl;
	}	
	return ;	
}
