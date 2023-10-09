/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:10:13 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/09 15:15:14 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <cstdlib>
#include <string>
#include <iostream>
#include "ICharacter.hpp"

class   AMateria
{
    protected:
        std::string _type;

    public:
        // Constructor
            AMateria();
            AMateria(const AMateria &amateria);
        // Overload Assignment Operator
            AMateria& operator=(const AMateria &amateria);
        // Getter Functions
            std::string const &getType() const;
        // Member Function
            virtual AMateria* clone() const = 0;
            virtual void use(ICharacter &target);
        // Destructor
            virtual ~AMateria();
};

#endif