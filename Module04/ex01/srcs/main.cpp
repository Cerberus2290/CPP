/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:43:18 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 13:54:07 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Animal.hpp"
#include "../incl/Brain.hpp"
#include "../incl/Cat.hpp"
#include "../incl/Dog.hpp"
#include "../incl/WrongAnimal.hpp"
#include "../incl/WrongCat.hpp"

int main( void )
{
    Animal *animals[10];
    Cat *cats = new Cat();
    Cat *cats2 = new Cat();
    *cats = *cats2;
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
    }
    for (int i = 0; i < 10; i++)
    {
        animals[i]->makeSound();
    }
    for (int i = 0; i < 10; i++)
    {
        delete animals[i];
    }
    delete cats;
    delete cats2;

    WrongAnimal* wronganimal = new WrongCat();
    Animal* meta = new Animal();
    wronganimal->makeSound();
    meta->makeSound();

    delete wronganimal;
    delete meta;

    return 0;
}