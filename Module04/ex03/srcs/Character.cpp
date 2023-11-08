/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:18:36 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/10 11:31:56 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Character.hpp"

// [**** Constructors ****]

Character::Character() : _name("Unknown")
{
    for (size_t i(0); i < INVENTORY_SIZE; ++i)
        _inventory[i] = NULL;
    std::cout << "Character has been created. --> default constructor" << std::endl;
}

Character::Character(const Character &character)
{
    *this = character;
    std::cout << "Character has been created. --> copy constructor" << std::endl;
}

Character::Character(const std::string &name) : _name(name)
{
    for (size_t i(0); i < INVENTORY_SIZE; ++i)
        _inventory[i] = NULL;
    std::cout << "Character has been created. --> string constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]

Character& Character::operator=(const Character &character)
{
    _name = character._name;
    for (size_t i(0); i < INVENTORY_SIZE; ++i)
    {
        delete _inventory[i];
        if (character._inventory[i])
            _inventory[i] = character._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }
    return *this;
}

// [**** Getter Functions ****]

std::string const   &Character::getName() const
{
    return _name;
}

// [**** Member Functions ****]

void    Character::equip(AMateria* m)
{
    for (size_t i(0); i < INVENTORY_SIZE; ++i)
    {
        if (_inventory[i] == NULL)
        {
            _inventory[i] = m;
            break ;
        }
    }
}

void    Character::unequip(int index)
{
    if (index >= 0 && index < INVENTORY_SIZE)
        _inventory[index] = NULL;
}

void    Character::use(int index, ICharacter& target)
{
    if (index >= 0 && index < INVENTORY_SIZE)
    {
        if (_inventory[index])
            _inventory[index]->use(target);
    }
}

// [**** Destructor ****]

Character::~Character()
{
    for (size_t i(0); i < INVENTORY_SIZE; ++i)
        delete _inventory[i];
    std::cout << "Character has been destroyed. --> deconstructor" << std::endl;
}