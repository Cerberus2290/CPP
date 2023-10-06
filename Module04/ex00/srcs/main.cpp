/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:20:22 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/06 09:36:05 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Animal.hpp"
#include "../incl/Cat.hpp"
#include "../incl/Dog.hpp"
#include "../incl/WrongAnimal.hpp"
#include "../incl/WrongCat.hpp"

int main( void )
{
    Animal      beast;
    WrongAnimal wrongBeast;
    WrongCat    wrongCat;
    Cat         cat;
    Dog         dog;
    
    std::cout << beast.getType() << std::endl;
    std::cout << cat.getType() << std::endl;
    std::cout << dog.getType() << std::endl;
    std::cout << wrongBeast.getType() << std::endl;
    std::cout << wrongCat.getType() << std::endl;
    beast.makeSound();
    cat.makeSound();
    dog.makeSound();
    wrongBeast.makeSound();
    wrongCat.makeSound();

    return 0;
}