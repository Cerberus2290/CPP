/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:21:28 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 13:53:25 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class   Dog : virtual public    Animal
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
        Brain   *_brain;
};

#endif