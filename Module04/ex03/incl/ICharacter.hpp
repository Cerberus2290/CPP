/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 07:04:27 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 16:44:36 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <cstdlib>
#include <string>
#include <iostream>
#include "AMateria.hpp"

class   AMateria;

class   ICharacter
{
    public:
        // Getter Functions
            virtual std::string const & getName() const = 0;
        // Member Function
            virtual void    equip(AMateria *) = 0;
            virtual void    unequip(int index) = 0;
            virtual void    use(int index, ICharacter& target) = 0;
        // Destructor
            virtual ~ICharacter() {};
};

#endif
