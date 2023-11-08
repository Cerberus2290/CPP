/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:20:22 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 10:42:42 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Animal.hpp"
#include "../incl/Cat.hpp"
#include "../incl/Dog.hpp"
#include "../incl/WrongAnimal.hpp"
#include "../incl/WrongCat.hpp"

int main( void )
{
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    const Animal* cat2 = new Cat();

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    std::cout << animal->getType() << " " << std::endl;

    dog->makeSound();
    cat->makeSound();
    animal->makeSound();
    cat2->makeSound();

    const WrongAnimal* wronganimal = new WrongCat();

    wronganimal->makeSound();

    std::cout << animal->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;

    delete animal;
    delete dog;
    delete cat;
    delete wronganimal;
    delete cat2;

    return 0;
}