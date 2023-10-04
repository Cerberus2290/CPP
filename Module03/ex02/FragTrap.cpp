/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:10:16 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/04 14:20:33 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// [**** Constructors ****]
FragTrap::FragTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " has been created --> default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " has been created --> string constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap) : ClapTrap(fragtrap)
{
    std::cout << "Fragtrap " << _name << " has been created --> copy constructor" << std::endl;
}

// [**** Overload Assignment Operator ****]
FragTrap& FragTrap::operator=(const FragTrap &fragtrap)
{
    _name = fragtrap._name;
    _hitPoints = fragtrap._hitPoints;
    _energyPoints = fragtrap._energyPoints;
    _attackDamage = fragtrap._attackDamage;
    return *this;
}

// [**** Member Functions ****]
void    FragTrap::highFivesGuys()
{
    std::cout << _name << " is asking for an epic HIGHFIVE" << std::endl;
}

// [**** Destructor ****]
FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " has been deconstructed --> deconstructor" << std::endl;
}