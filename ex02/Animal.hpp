/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:11:19 by makacem           #+#    #+#             */
/*   Updated: 2023/04/29 15:57:10 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP
# include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        Animal(Animal const &otherObject);
        Animal  &operator=(const Animal &other);
        virtual ~Animal(void);
        
        void        setType(std::string const type);
        std::string getType(void) const;

        virtual void    makeSound(void) const = 0;
};



#endif

