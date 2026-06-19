/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafzal < mafzal@student.42warsaw.pl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 23:25:13 by mafzal            #+#    #+#             */
/*   Updated: 2026/06/19 23:25:14 by mafzal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
  private:
	std::string type;

  public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string &getType(void);
	void setType(const std::string &type);
};

#endif