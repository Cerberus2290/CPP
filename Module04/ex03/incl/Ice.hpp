/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:00:55 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/10 10:04:10 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class   Ice : public AMateria
{
    public:
        // Constructor
            Ice();
            Ice(const Ice &ice);
            Ice(std::string const &type);
        // Overload Assignment Operator
            Ice& operator=(const Ice &ice);
        // Getter Functions
            std::string const &getType() const;
        // Member Function
            Ice* clone() const;
            void use(ICharacter &target);
        // Destructor
            ~Ice();
};

#endif