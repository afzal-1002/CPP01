/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafzal < mafzal@student.42warsaw.pl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 19:08:35 by mafzal            #+#    #+#             */
/*   Updated: 2026/06/19 23:26:29 by mafzal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int		i;

	horde = zombieHorde(5, "Foo");
	i = 0;
	while (i < 5)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return (0);
}
