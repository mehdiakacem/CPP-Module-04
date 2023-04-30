/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 18:37:54 by makacem           #+#    #+#             */
/*   Updated: 2023/04/30 08:34:47 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"

std::string const &Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria* m)
{
    if (this->_count < 4)
    {
        this->_inventory[this->_count] = m;
        this->_count++;
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        this->_inventory[idx] = NULL;
        this->_count--;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4)
        this->_inventory[idx]->use(target);
}

Character::Character(std::string const &name)
: _name(name), _count(0)
{
    std::cout << "Character Constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(Character const &otherObject)
{
    std::cout << "Character Copy Constructor called" << std::endl;
    *this = otherObject;
}

Character  &Character::operator=(const Character &other)
{
    std::cout << "Character Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_count = other._count;
        for (int i = 0; i < 4; i++)
            this->_inventory[i] = other._inventory[i];
    }
    return *this;
}

Character::~Character(void)
{
    std::cout << "Character Destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        delete this->_inventory[i];
}

Character::Character(void)
{
    std::cout << "Character Default constructor called" << std::endl;
}
