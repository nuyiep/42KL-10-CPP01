/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 14:45:26 by plau              #+#    #+#             */
/*   Updated: 2023/04/10 17:09:12 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *eren = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		eren[i].setIndex(i);
		eren[i].setName(name);		
	}
	return (eren);
}
