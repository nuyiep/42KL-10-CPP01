/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:44:34 by plau              #+#    #+#             */
/*   Updated: 2023/04/10 18:55:12 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "--------Memory addresses:" << std::endl;
	std::cout << "Memory address of str =		   " << &str << std::endl;
	std::cout << "Memory address held by stringPTR=  " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF=  " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "--------Values:" << std::endl;
	std::cout << "Value of str =		       " << str << std::endl;
	std::cout << "Value pointed to by stringPTR= " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF= " << stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "They should all have the same output" << std::endl;
	return (0);
}

/* Pointers v references */
