/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 08:43:11 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 10:01:33 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <cstdlib>
#include <string>
#include <iostream>

class   WrongAnimal
{
    public:
        // Constructor
            WrongAnimal();
            WrongAnimal(const WrongAnimal &wronganimal);
        // Overload Assignment Operator
            WrongAnimal& operator=(const WrongAnimal &wronganimal);
        // Member Function
            void    makeSound() const;
        // Getter & Setter Functions
            std::string getType() const;
            void        setType(std::string type);
        // Destructor
        virtual ~WrongAnimal();

    protected:
        // Attributes
            std::string _type;
};

#endif