/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 09:45:24 by makacem           #+#    #+#             */
/*   Updated: 2023/04/29 09:46:01 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void    WrongAnimal::makeSound(void) const
{
    std::cout << "<<WrongAnimal sound>>" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}

void    WrongAnimal::setType(std::string const type)
{
    this->type = type;
}

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
    setType("WrongAnimal");
}

WrongAnimal::WrongAnimal(WrongAnimal const &otherObject)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = otherObject;
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}