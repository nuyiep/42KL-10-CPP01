/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:28:24 by plau              #+#    #+#             */
/*   Updated: 2023/04/10 13:23:14 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		void			annouce(void);
	private:
		std::string		_zombieName;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
