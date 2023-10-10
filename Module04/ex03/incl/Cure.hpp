/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:56:14 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/10 10:00:20 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class   Cure : public AMateria
{
    public:
        // Constructor
            Cure();
            Cure(const Cure &cure);
            Cure(std::string const &type);
        // Overload Assignment Operator
            Cure& operator=(const Cure &cure);
        // Getter Functions
            std::string const &getType() const;
        // Member Function
            Cure* clone() const;
            void    use(ICharacter &target);
        // Destructor
            ~Cure();
};

#endif