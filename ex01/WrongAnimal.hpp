/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 09:46:13 by makacem           #+#    #+#             */
/*   Updated: 2023/04/29 09:56:33 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP

# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(void);
        WrongAnimal(WrongAnimal const &otherObject);
        WrongAnimal  &operator=(const WrongAnimal &other);
        ~WrongAnimal(void);
        
        void        setType(std::string const type);
        std::string getType(void) const;

        void    makeSound(void) const;
};





#endif

