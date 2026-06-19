/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafzal < mafzal@student.42warsaw.pl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 23:26:38 by mafzal            #+#    #+#             */
/*   Updated: 2026/06/19 23:26:39 by mafzal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*heapZombie;
	delete	heapZombie;

	heapZombie = newZombie("Foo");
	heapZombie->announce();
	randomChump("Bob");
	return (0);
}
