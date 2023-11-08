/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:43:59 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 07:13:47 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class   ScavTrap: virtual public    ClapTrap
{
    public:
        // Constructors
            ScavTrap();
            ScavTrap(std::string name);
            ScavTrap(ScavTrap const &scavtrap);
        // Overload Assignment Operator
            ScavTrap& operator=(ScavTrap const &scavtrap);
        // Member Functions
            void    attack(const std::string& target);
            void    guardGate();
        // Destructor
            ~ScavTrap();
};

#endif