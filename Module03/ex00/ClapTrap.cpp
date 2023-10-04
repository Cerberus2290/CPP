/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:55:52 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/04 12:58:27 by tstrassb         ###   ########.fr       */
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

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    *this = claptrap;
    std::cout << _name << " has been created. --> copy constructor" << std::endl;
}

// [**** Overload Assignment Operator ****]

ClapTrap& ClapTrap::operator=(const ClapTrap &claptrap)
{
    this->_name = claptrap._name;
    this->_hitPoints = claptrap._hitPoints;
    this->_energyPoints = claptrap._energyPoints;
    this->_attackDamage = claptrap._attackDamage;
    return *this;
}

// [**** Member Functions ****]

void    ClapTrap::attack(const std::string& target)
{
    if (_hitPoints == 0)
        std::cout << _name << " is dead. It cannot attack." << std::endl;
    else if (_energyPoints == 0)
        std::cout << _name << " is out of energy. It cannot act." << std::endl;
    else
    {
        std::cout << _name << " attacks " << target << " " << _attackDamage << " points of damage!" << std::endl;
        --_energyPoints;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints > 0)
    {
        std::cout << _name << " has been attacked and loses " << amount << " hit points!";
        if (_hitPoints <= amount)
            std::cout << " " << _name << " died!";
        std::cout << std::endl;
    }
    else
        std::cout << "Yowzah! Calm down buddy! " << _name << " is already dead!" << std::endl;
    if (_hitPoints <= amount)
        _hitPoints = 0;
    else
        _hitPoints -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints == 0)
        std::cout << _name << " is dead and cannot be repaired!" << std::endl;
    else if (_energyPoints == 0)
        std::cout << _name << " has no more energy left to repair!" << std::endl;
    else
    {
        std::cout << _name << " repairs itself and gains " << amount << " hit points!" << std::endl;
        --_energyPoints;
    }
}

// [**** Destructor ****]

ClapTrap::~ClapTrap()
{
    std::cout << _name << " has been deconstructed. --> deconstructor" << std::endl;
}