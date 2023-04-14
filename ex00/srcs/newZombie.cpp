/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:28:14 by plau              #+#    #+#             */
/*   Updated: 2023/04/13 21:59:24 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Creates a zombie, name it */
/* and return it so we can use it outside of the function scope */
/* Allocated on the heap and should be explicitly deleted */

/* new = malloc (allocate space on heap) */
/* new returns a pointer to the newly created Zombie */
Zombie	*newZombie(std::string name)
{
	Zombie	*eren = new Zombie(name);
	eren->annouce();
	return (eren);
}
