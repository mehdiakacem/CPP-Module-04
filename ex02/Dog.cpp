/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:03:24 by makacem           #+#    #+#             */
/*   Updated: 2023/04/29 13:57:29 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void    Dog::makeSound(void) const
{
    std::cout << "<< woof woof >>" << std::endl;
}

Dog::Dog(void)
{
    brain = new Brain();
    std::cout << "Dog Default constructor called" << std::endl;
    setType("Dog");
}

Dog::Dog(Dog const &otherObject)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = otherObject;
}

Dog  &Dog::operator=(const Dog &other)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        this->brain = new Brain();
        *(this->brain) = *(other.brain);
    }
    return *this;
}

Dog::~Dog(void)
{
    delete brain;
    std::cout << "Dog Destructor called" << std::endl;
}