/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:59:02 by makacem           #+#    #+#             */
/*   Updated: 2023/04/29 09:30:43 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void    Animal::makeSound(void) const
{
    std::cout << "<<Animal sound>>" << std::endl;
}

std::string Animal::getType(void) const
{
    return this->type;
}

void    Animal::setType(std::string const type)
{
    this->type = type;
}

Animal::Animal(void)
{
    std::cout << "Animal Default constructor called" << std::endl;
    setType("Animal");
}

Animal::Animal(Animal const &otherObject)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = otherObject;
}

Animal  &Animal::operator=(const Animal &other)
{
    std::cout << "Animal Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

Animal::~Animal(void)
{
    std::cout << "Animal Destructor called" << std::endl;
}