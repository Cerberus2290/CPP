/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:55:52 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/03 12:07:37 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//[**** Constructor ****]
ClapTrap::ClapTrap() : _name(""), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << _name << " is created with " << "[Default constructor]" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << _name << " is closed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
    _name = c._name;
    _hitPoint = c._hitPoint;
    _energyPoint = c._energyPoint;
    _attackDamage = c._attackDamage;
    std::cout << _name << " is created with " << "[Copy constructor]" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << _name << " is created with " << "[String constructor]" << std::endl;
}

//[**** Public Members ****]
void    ClapTrap::attack(const std::string& target)
{
    if (_energyPoint > 0)
        std::cout << _name << " attacks to " << target << " and deal " << _attackDamage << " damage." << std::endl;
    _energyPoint--;
}

void    ClapTrap::takeDamage(unsigned int amount)
