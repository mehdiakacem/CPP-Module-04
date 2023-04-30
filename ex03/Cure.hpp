/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:53:51 by makacem           #+#    #+#             */
/*   Updated: 2023/04/30 08:51:20 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP

# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(Cure const &src);
        Cure  &operator=(Cure const &rhs);
        virtual ~Cure(void);

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};


#endif