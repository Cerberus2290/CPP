/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:20:16 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/05 13:23:47 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <cstdlib>
#include <string>
#include <iostream>

class   Animal
{
    public:
        // Constructors
            Animal();
            Animal(const Animal &animal);
        // Overload Assignment Operator
            Animal& operator=(const Animal &animal);
        // Member Functions
            void    makeSound() const;
        // Getter Function
            std::string getType() const;
        // Destructor
            ~Animal();

    protected:
        //Attribute
            std::string _type;
};

#endif