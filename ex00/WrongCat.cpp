/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 09:47:47 by makacem           #+#    #+#             */
/*   Updated: 2023/04/29 09:48:05 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void    WrongCat::makeSound(void) const
{
    std::cout << "<< meow meow >>" << std::endl;
}

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat Default constructor called" << std::endl;
    setType("WrongCat");
}

WrongCat::WrongCat(WrongCat const &otherObject)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = otherObject;
}

WrongCat  &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat Destructor called" << std::endl;
}