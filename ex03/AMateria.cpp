/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:37:06 by makacem           #+#    #+#             */
/*   Updated: 2023/04/30 08:52:57 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
    return ;
}

AMateria::AMateria(std::string const & type)
{
    this->_type = type;
    return ;
}

AMateria::AMateria(AMateria const &src)
{
    *this = src;
    return ;
}

AMateria::~AMateria(void)
{
    return ;
}

AMateria  &AMateria::operator=(AMateria const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    return ;
}