/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:46:48 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 07:47:24 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// [**** Constructors ****]
DiamondTrap::DiamondTrap() : ClapTrap("Empty_clap_name", 100, 50, 30), ScavTrap(), FragTrap()
{
    _name = "defaultDiamondTrap";
    std::cout << "[DiamondTrap] " << _name << " has been created. --> default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n + "_clap_name", 100, 50, 30), ScavTrap(), FragTrap()
{
    _name = n;
    std::cout << "[DiamondTrap] " << _name << " has been created. --> full constructor" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamondtrap) :
    ClapTrap(diamondtrap._name + "clap name", 100, 50, 30), ScavTrap(), FragTrap()
{
    _name = diamondtrap._name;
    std::cout << "[DiamondTrap] " << _name << " has been created. --> copy constructor" << std::endl;
}

// [**** Overload Assignment Operator ****]
DiamondTrap& DiamondTrap::operator=(DiamondTrap const &diamondtrap)
{
    _name = diamondtrap._name;
    ClapTrap::operator=(diamondtrap);
    std::cout << "[DiamondTrap] " << _name << " has been created. --> copy assignment constructor" << std::endl;
    return *this;
}

// [**** Member Functions ****]
void    DiamondTrap::status()
{
    std::cout << "Hit Points: " << _hitPoints << std::endl;
    std::cout << "Energy Points: " << _energyPoints << std::endl;
    std::cout << "Attack Damage: " << _attackDamage << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "My complete name is: " << _name << " ClapTraps name is: " << ClapTrap::_name << std::endl;
}

// [**** Desctructor ****]
DiamondTrap::~DiamondTrap()
{
    std::cout << "[DiamondTrap] " << _name << " has been deconstructed. --> deconstructor" << std::endl;
}