/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:22:20 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/05 11:24:13 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class   DiamondTrap:    public  ScavTrap,   public  FragTrap
{
    public:
        // Constructors
            DiamondTrap();
            DiamondTrap(std::string name);
            DiamondTrap(const DiamondTrap &diamondtrap);
        // Overload Assignment Operator
            DiamondTrap& operator=(const DiamondTrap &diamondtrap);
        // Member Functions
            void    attack(const std::string& target);
            void    whoAmI();
        // Destructor
            ~DiamondTrap();

    private:
        // Attributes
            std::string _name;
};

#endif