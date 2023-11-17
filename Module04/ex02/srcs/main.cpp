/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:43:18 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 14:16:36 by tstrassb         ###   ########.fr       */
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
    Animal *doge = new Dog();
    Animal *cat = new Cat();
    doge->makeSound();
    cat->makeSound();
    
    Animal *test;
    test = cat;
    test->makeSound();

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
    delete doge;
    delete cat;
    
    return 0;
}