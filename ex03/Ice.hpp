/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:55:04 by makacem           #+#    #+#             */
/*   Updated: 2023/04/30 08:49:48 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP

# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(Ice const &src);
        Ice  &operator=(Ice const &rhs);
        virtual ~Ice(void);

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};


#endif