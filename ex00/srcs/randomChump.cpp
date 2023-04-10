/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:02:51 by plau              #+#    #+#             */
/*   Updated: 2023/04/10 13:55:10 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Create a zombie on the stack and make it annouce itself */
/* Zombie should be allocated on the stack */
/* implicitly deleted at the end of the function */
/* and the Zombie destructor will be called */
void	randomChump(std::string name)
{
	Zombie	sasageyo(name);
	sasageyo.annouce();
}
