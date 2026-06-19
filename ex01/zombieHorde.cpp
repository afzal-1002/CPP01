/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafzal < mafzal@student.42warsaw.pl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 23:27:41 by mafzal            #+#    #+#             */
/*   Updated: 2026/06/19 23:27:42 by mafzal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombie;
	int		i;

	zombie = new Zombie[N];
	i = 0;
	while (i < N)
	{
		zombie[i].setName(name);
		i++;
	}
	return (zombie);
}
