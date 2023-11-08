/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:55:52 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 07:49:34 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// [**** Constructors ****]

ClapTrap::ClapTrap() : _name("Empty"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << _name << " has been created. --> default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << _name << " has been created. --> string constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage) :
        _name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage)
{
    std::cout << _name << " has been created. --> full constructor" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &claptrap) : _name(claptrap._name), _hitPoints(claptrap._hitPoints),
                            _energyPoints(claptrap._energyPoints), _attackDamage(claptrap._attackDamage)
{
    std::cout << _name << " has been created. --> copy constructor" << std::endl;
}

// [**** Overload Assignment Operator ****]

ClapTrap& ClapTrap::operator=(ClapTrap const &claptrap)
{
    _name = claptrap._name;
    _hitPoints = claptrap._hitPoints;
    _energyPoints = claptrap._energyPoints;
    _attackDamage = claptrap._attackDamage;
    std::cout << _name << " has been created. --> copy assignment constructor" << std::endl;
    return *this;
}

// [**** Member Functions ****]

void    ClapTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << _name << ": attacks " << target << ", causing " << this->_attackDamage
            << " points of damage!" << std::endl;
        _energyPoints--;
    }
    else
        std::cout << _name << ": is dead/has no energy left and cannot attack!" << std::endl;
    std::cout << "Remaining Energy: " << _energyPoints << std::endl <<
        "Remaining Hit Points: " << _hitPoints << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints > 0)
    {
        _hitPoints -= amount;
        std::cout << _name << ": takes " << amount << " points of damage!" << std::endl;
        if (_hitPoints <= 0)
            std::cout << _name << ": has died!" << std::endl;
    }
    else
        std::cout << _name << ": is already dead!" << std::endl;
    if (_hitPoints < 0)
        _hitPoints = 0;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0)
    {
        _hitPoints += amount;
        _energyPoints--;
        std::cout << _name << ": is repaired for " << amount << " points! [1 Engery Point consumed]" << std::endl;
    }
    else
        std::cout << _name << ": has no energy left and cannot be repaired!" << std::endl;
}

// [**** Destructor ****]

ClapTrap::~ClapTrap()
{
    std::cout << _name << ": has been deconstructed. --> deconstructor" << std::endl;
}