/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 14:45:23 by plau              #+#    #+#             */
/*   Updated: 2023/04/10 17:34:50 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		
		void	setName(std::string name);
		void	setIndex(int index);
		void	annouce(void);
		int		getIndex(void) const;
	private:
		std::string	_name;
		int			_index;
};

Zombie *zombieHorde(int N, std::string name);

#endif
