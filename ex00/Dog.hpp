/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:00:14 by makacem           #+#    #+#             */
/*   Updated: 2023/04/29 09:31:09 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(Dog const &otherObject);
        Dog  &operator=(const Dog &other);
        ~Dog(void);
        
        void    makeSound(void) const;
};





#endif

