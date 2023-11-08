/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:48:53 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 06:53:48 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// [**** Constructors ****]
ScavTrap::ScavTrap()
{
    std::cout << "[ScavTrap] " << _name << " has been created. --> default constructor" << std::endl;
    _name = "defaultScavTrap";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "[ScavTrap] " << _name << " has been created. --> string constructor" << std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) : ClapTrap(scavtrap)
{
    std::cout << "[ScavTrap] " << _name << " has been created. --> copy constructor" << std::endl;
}

// [**** Overload Assignment Operator ****]
ScavTrap& ScavTrap::operator=(const ScavTrap &scavtrap)
{
    _name = scavtrap._name;
    _hitPoints = scavtrap._hitPoints;
    _energyPoints = scavtrap._energyPoints;
    _attackDamage = scavtrap._attackDamage;
    std::cout << "[ScavTrap] " << _name << " has been created. --> copy assignment constructor" << std::endl;
    return *this;
}

// [**** Member Functions ****]
void    ScavTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "[ScavTrap] " << _name << " attacks " << target << ", causing "
            << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }
    else
        std::cout << "[ScavTrap] " << _name << ": is dead/has no energy left and cannot attack!" << std::endl;
    std::cout << "Remaining Energy: " << _energyPoints << std::endl <<
        "Remaining Hit Points: " << _hitPoints << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << _name << " is in 'Gate Keeper' mode!" << std::endl;
}

// [**** Deconstructor ****]
ScavTrap::~ScavTrap()
{
    std::cout << "[ScavTrap] " << _name << " has been deconstructed. --> deconstructor" << std::endl; 
}