/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 23:15:37 by aaslan            #+#    #+#             */
/*   Updated: 2023/07/31 19:43:27 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	name = "Character Default Name";

	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
	}
}

Character::Character(const Character &other)
{
	name = other.name;

	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i] != NULL)
			inventory[i] = other.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		name = other.name;

		for (int i = 0; i < 4; i++)
		{
			if (inventory[i] != NULL)
				delete inventory[i];

			if (other.inventory[i] != NULL)
				inventory[i] = other.inventory[i]->clone();
			else
				inventory[i] = NULL;
		}
	}

	return *this;
}

Character::Character(std::string const &name)
{
	this->name = name;

	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

std::string const &Character::getName() const
{
	return name;
}

void Character::equip(AMateria *m)
{
}

void Character::unequip(int idx)
{
}

void Character::use(int idx, ICharacter &target)
{
}
