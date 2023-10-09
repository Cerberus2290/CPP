/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:21:28 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/09 14:52:44 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

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
    
    private:
        // Attributes
            Brain   *_brain;
};

#endif