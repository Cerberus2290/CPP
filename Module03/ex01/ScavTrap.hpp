/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:43:59 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/04 13:13:00 by tstrassb         ###   ########.fr       */
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