/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 08:56:03 by makacem           #+#    #+#             */
/*   Updated: 2023/04/30 09:07:56 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    std::cout << "MateriaSource Default constructor called" << std::endl;
    this->_materia[0] = NULL;
    this->_materia[1] = NULL;
    this->_materia[2] = NULL;
    this->_materia[3] = NULL;
    return ;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    *this = src;
    return ;
}

MateriaSource::~MateriaSource(void)
{
    std::cout << "MateriaSource Destructor called" << std::endl;
    return ;
}

MateriaSource  &MateriaSource::operator=(MateriaSource const &rhs)
{
    if (this != &rhs)
    {
        this->_materia[0] = rhs._materia[0];
        this->_materia[1] = rhs._materia[1];
        this->_materia[2] = rhs._materia[2];
        this->_materia[3] = rhs._materia[3];
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
    int i = 0;
    while (i < 4)
    {
        if (this->_materia[i] == NULL)
        {
            this->_materia[i] = m;
            break ;
        }
        i++;
    }
    return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = 0;
    while (i < 4)
    {
        if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
            return (this->_materia[i]->clone());
        i++;
    }
    return (NULL);
}
