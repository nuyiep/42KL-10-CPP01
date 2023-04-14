/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:58:43 by plau              #+#    #+#             */
/*   Updated: 2023/04/13 22:42:28 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		// &- ref to a Weapon object is passed to the constructor
		// rather than a copy of it
		// will modify the original
		~HumanA();

		void	attack(void);
	private:
		Weapon &weapon;
		std::string _name;
};

#endif
