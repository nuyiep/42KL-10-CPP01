/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:58:48 by plau              #+#    #+#             */
/*   Updated: 2023/04/11 17:47:11 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
	public:
		//constructors
		HumanB(std::string name);
		//HumanB(std::string name, Weapon &weaponType);
		//destructor
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon &new_weapon);
	private:
		Weapon *weapon;
		std::string _name;
};

#endif
