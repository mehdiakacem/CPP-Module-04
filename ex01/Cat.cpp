/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:00:47 by makacem           #+#    #+#             */
/*   Updated: 2023/04/29 13:54:59 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void    Cat::makeSound(void) const
{
    std::cout << "<< meow meow >>" << std::endl;
}

Cat::Cat(void)
{
    brain = new Brain();
    std::cout << "Cat Default constructor called" << std::endl;
    setType("Cat");
}

Cat::Cat(Cat const &otherObject)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = otherObject;
}

Cat  &Cat::operator=(const Cat &other)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        this->brain = new Brain();
        *(this->brain) = *(other.brain);
    }
    return *this;
}

Cat::~Cat(void)
{
    delete brain;
    std::cout << "Cat Destructor called" << std::endl;
}