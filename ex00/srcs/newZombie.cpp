/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:28:14 by plau              #+#    #+#             */
/*   Updated: 2023/04/10 13:54:23 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Allocate a zombie on the heap and return it */
/* Creates a new zombie using new and returns its pointer */
/* Pointing to the newly created Zombie */
/* Thus we could use the pointer and call its member function */
/* Allocated on the heap and should be explicitly deleted */
Zombie	*newZombie(std::string name)
{
	Zombie	*eren = new Zombie(name);
	return (eren);
}
