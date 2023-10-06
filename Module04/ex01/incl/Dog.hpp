/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:21:28 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/05 15:30:39 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class   Dog : public    Animal
{
    public:
        // Constructor
            Dog();
            Dog(const Dog &dog);
        // Overload Assignment Operator
            Dog& operator=(const Dog &dog);
        // Member Function
            void    makeSound() const;
        // Destructor
            ~Dog();
};

#endif