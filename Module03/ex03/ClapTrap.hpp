/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:50:41 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 07:18:40 by tstrassb         ###   ########.fr       */
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
            ClapTrap(std::string str);
            ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
            ClapTrap(ClapTrap const &claptrap);
        // Overload Assignment Operator
            ClapTrap& operator=(ClapTrap const &claptrap);
        // Member Functions
            void    attack(const std::string& target);
            void    takeDamage(unsigned int amount);
            void    beRepaired(unsigned int amount);
        // Destructor
            ~ClapTrap();
    
    protected:
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;
};

#endif