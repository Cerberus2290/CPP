/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:20:39 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/05 10:20:54 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class   ScavTrap: public    ClapTrap
{
    public:
        // Constructors
            ScavTrap();
            ScavTrap(std::string name);
            ScavTrap(const ScavTrap &scavtrap);
        // Overload Assignment Operator
            ScavTrap& operator=(const ScavTrap &scavtrap);
        // Member Functions
            void    attack(const std::string& target);
            void    guardGate();
        // Destructor
            ~ScavTrap();
};

#endif