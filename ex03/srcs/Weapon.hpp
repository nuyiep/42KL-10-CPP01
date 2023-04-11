/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:58:56 by plau              #+#    #+#             */
/*   Updated: 2023/04/11 16:50:47 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

#define	RESET "\033[0m"
#define GREEN "\033[32m"
#define BLUE  "\033[34m"
#define CYAN  "\033[36m"

class Weapon
{
	public:
		Weapon(void);
		Weapon(std::string name);
		~Weapon(void);

		void  setType(std::string type);
		const std::string	&getType(void);
	private:
		std::string _type;
};

#endif
