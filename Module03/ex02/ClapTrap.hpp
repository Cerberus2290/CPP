/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:02:19 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/04 14:02:31 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <cstdlib>

class   ClapTrap
{
    public:
        // Constructors
            ClapTrap();
            ClapTrap(std::string name);
            ClapTrap(const ClapTrap &claptrap);
        // Overload Assignment Operator
            ClapTrap& operator=(const ClapTrap &claptrap);
        // Member Functions
            void    attack(const std::string& target);
            void    takeDamage(unsigned int amount);
            void    beRepaired(unsigned int amount);
        // Destructor
            ~ClapTrap();
    
    protected:
        // Attributes
            std::string _name;
            size_t      _hitPoints;
            size_t      _energyPoints;
            size_t      _attackDamage;
};

#endif