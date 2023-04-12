/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:01:50 by plau              #+#    #+#             */
/*   Updated: 2023/04/12 15:05:10 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //std::cout
#include <fstream> //std::ifstream - input file stream
#include <string> //getline

/* Use ref is more efficient */
/* to avoid making a copy- can modify the original string*/
/* Replace every occurence of s1 with s2 */

/* npos - represents max value for a size_t type */
/* 		- represents the length of a string */
/* 		- indicate that the search/operation failed */
/*			to find a match */
std::string	amend_line(std::string& line, const std::string& s1, const std::string& s2)
{
	std::size_t pos = line.find(s1);
	while (pos != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos = line.find(s1, pos + s2.length());
	}
	return (line);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Needs 3 arguments" << std::endl;
		std::cout << "<filename>, s1, s2" << std::endl;
		return (1);
	}
	else
	{
		std::ifstream inputFile(av[1]);
		std::ofstream outputFile("output.txt", std::ios::out | std::ios::trunc); 
		//ios::out - file should be opened for output
		if (inputFile.is_open() && outputFile.is_open())
		{
			std::string line;
			while (std::getline(inputFile, line))
			{
				line = amend_line(line, av[2], av[3]);
				outputFile << line << std::endl; 
				//rather than printing on std::cout, print to outputFile
			}
			inputFile.close();
			outputFile.close();
			std::cout << "File copied successfully" << std::endl;
		}
		else
		{
			std::cout << "Failed to open input file" << std::endl;
		}
	}
	return (0);
}
