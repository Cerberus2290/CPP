/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:46:48 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/05 11:21:20 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// [**** Constructors ****]
DiamondTrap::DiamondTrap() : ClapTrap("Empty_clap_name")
{
    this->_name = "Empty";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "[DiamondTrap] " << _name << " has been created. --> default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "[DiamondTrap] " << _name << " has been created. --> string constructor" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap) :
    ClapTrap(diamondtrap), ScavTrap(diamondtrap), FragTrap(diamondtrap)
{
    *this = diamondtrap;
    std::cout << "[DiamondTrap] " << _name << " has been created. --> copy constructor" << std::endl;
}

// [**** Overload Assignment Operator ****]
DiamondTrap& DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
    this->ClapTrap::_name = diamondtrap.ClapTrap::_name;
    _name = diamondtrap._name;
    _hitPoints = diamondtrap._hitPoints;
    _energyPoints = diamondtrap._energyPoints;
    _attackDamage = diamondtrap._attackDamage;
    return *this;
}

// [**** Member Functions ****]
void    DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "My complete name is: " << ClapTrap::_name << " but you can call me: " << _name << std::endl;
}

// [**** Desctructor ****]
DiamondTrap::~DiamondTrap()
{
    std::cout << "[DiamondTrap] " << _name << " has been deconstructed. --> deconstructor" << std::endl;
}