/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:56:14 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 15:42:33 by tstrassb         ###   ########.fr       */
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
        // Overload Assignment Operator
            Cure& operator=(const Cure &cure);
        // Member Function
            Cure* clone() const;
            void    use(ICharacter &target);
        // Destructor
            ~Cure();
};

#endif