/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:10:13 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 14:26:03 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <cstdlib>
#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string _type;

    public:
        // Constructor
            AMateria();
            AMateria(const AMateria &amateria);
            AMateria(std::string const &type);
        // Overload Assignment Operator
            AMateria& operator=(const AMateria &amateria);
        // Getter Functions
            std::string const &getType() const;
        // Member Function
            virtual AMateria* clone() const = 0;
            virtual void use(ICharacter &target);
        // Destructor
            virtual ~AMateria() = 0;
};

#endif