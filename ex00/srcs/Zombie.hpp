/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:28:24 by plau              #+#    #+#             */
/*   Updated: 2023/04/08 19:01:05 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void			annouce(void);
		std::string		*newZombie(std::string name);
		void			randomChump(std::string name);
		std::string		getZombieName();
	private:
		std::string		_zombieName;
};

#endif
