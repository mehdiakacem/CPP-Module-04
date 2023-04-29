/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:07:24 by makacem           #+#    #+#             */
/*   Updated: 2023/04/29 15:58:37 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    int nbrof_animals = 4;
    Animal* animals[nbrof_animals];

    for (int i = 0; i < nbrof_animals / 2; i++) {
        animals[i] = new Dog();
        std::cout << i << std::endl;
    }
    for (int i = nbrof_animals / 2; i < nbrof_animals; i++) {
        animals[i] = new Cat();
        std::cout << i << std::endl;
    }

    animals[0]->makeSound();
    animals[2]->makeSound();

    for (int i = 0; i < nbrof_animals; i++) {
        delete animals[i];
    }
    delete j;
    delete i;
    
    return 0;
}