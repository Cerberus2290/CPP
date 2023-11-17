/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:20:16 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 09:53:57 by tstrassb         ###   ########.fr       */
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
            virtual void    makeSound() const;
        // Getter & Setter Functions
            std::string getType() const;
            void        setType(std::string type);
        // Destructor
            virtual ~Animal();

    protected:
        //Attribute
            std::string _type;
};

#endif