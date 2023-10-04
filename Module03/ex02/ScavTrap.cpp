/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:09:26 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/04 14:09:37 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// [**** Constructors ****]
ScavTrap::ScavTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " has been created --> default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " has been created --> string constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) : ClapTrap(scavtrap)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " has been created --> copy constructor" << std::endl;
}

// [**** Overload Assignment Operator ****]
ScavTrap& ScavTrap::operator=(const ScavTrap &scavtrap)
{
    _name = scavtrap._name;
    _hitPoints = scavtrap._hitPoints;
    _energyPoints = scavtrap._energyPoints;
    _attackDamage = scavtrap._attackDamage;
    return *this;
}

// [**** Member Functions ****]
void    ScavTrap::attack(const std::string& target)
{
    if (_hitPoints == 0)
        std::cout << _name << " is dead and cannot attack!" << std::endl;
    else if (_energyPoints == 0)
        std::cout << _name << " is out of energy and cannot act!" << std::endl;
    else
    {
        std::cout << _name << " attacks " << target << ", and hits for " << _attackDamage << " points of damage!" << std::endl;
        --_energyPoints;
    }
}

void    ScavTrap::guardGate()
{
    std::cout << _name << " is in 'Gate Keeper' mode!" << std::endl;
}

// [**** Deconstructor ****]
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " has been deconstructed --> deconstructor" << std::endl; 
}