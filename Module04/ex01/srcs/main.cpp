/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:43:18 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/06 14:05:25 by tstrassb         ###   ########.fr       */
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
    std::cout << "---HOME---" << std::endl;

    Animal  *home[10];

    for (size_t i(0); i < 10; i++)
    {
        if (i < 5)
            home[i] = new Dog();
        else
            home[i] = new Cat();
    }
    for (size_t i(0); i < 10; i++)
        delete home[i];
    return 0;
}