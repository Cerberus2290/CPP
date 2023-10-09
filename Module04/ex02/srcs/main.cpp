/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:01:01 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/09 15:05:09 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Animal.hpp"
#include "../incl/WrongAnimal.hpp"
#include "../incl/WrongCat.hpp"
#include "../incl/Cat.hpp"
#include "../incl/Dog.hpp"
#include "../incl/Brain.hpp"

int main( void )
{
    Animal  *home[10];

    for (size_t i(0); i < 10; ++i)
    {
        if (i < 5)
            home[i] = new Dog();
        else
            home[i] = new Cat();
    }
    for (size_t i(0); i < 10; ++i)
        delete home[i];
    return 0;
}