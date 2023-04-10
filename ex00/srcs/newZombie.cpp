/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:28:14 by plau              #+#    #+#             */
/*   Updated: 2023/04/10 14:09:33 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Creates a zombie, name it */
/* and return it so we can use it outside of the function scope */
/* Allocate a zombie on the heap and return it */
/* Creates a new zombie using new and returns its pointer */
/* Pointing to the newly created Zombie */
/* Allocated on the heap and should be explicitly deleted */
Zombie	*newZombie(std::string name)
{
	Zombie	*eren = new Zombie(name);
	eren->annouce();
	return (eren);
}
