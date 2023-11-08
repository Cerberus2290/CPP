/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:22:20 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 07:16:14 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class   DiamondTrap : public  ScavTrap, public  FragTrap
{
    public:
        // Constructors
            DiamondTrap();
            DiamondTrap(std::string name);
            DiamondTrap(DiamondTrap const &diamondtrap);
        // Overload Assignment Operator
            DiamondTrap& operator=(DiamondTrap const &diamondtrap);
        // Member Functions
            using  ScavTrap::attack;
            void    whoAmI();
            void    status();
        // Destructor
            ~DiamondTrap();

    private:
        // Attributes
            std::string _name;
};

#endif