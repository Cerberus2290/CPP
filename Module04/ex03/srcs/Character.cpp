/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:18:36 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 16:51:07 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Character.hpp"

// [**** Constructors ****]

Character::Character() : count_ground(0), _name("Default")
{
    for (int i = 0; i < INVENTORY_SIZE; i++)
        _inventory[i] = NULL;
    for (int i = 0; i < 1000; i++)
        _ground[i] = NULL;
    std::cout << "Character has been created. --> default constructor" << std::endl;
}

Character::Character(const Character &character)
{
    *this = character;
    std::cout << "Character has been created. --> copy constructor" << std::endl;
}

Character::Character(std::string name) : count_ground(0), _name(name)
{
    for (int i = 0; i < INVENTORY_SIZE; i++)
        _inventory[i] = NULL;
    for (int i = 0; i < 1000; i++)
        _ground[i] = NULL;
    std::cout << "Character has been created. --> string constructor" << std::endl;
    this->_name = name;
}

// [**** Overload Assignment Operators ****]

Character& Character::operator=(const Character &character)
{
    _name = character.getName();
    for (int i = 0; i < INVENTORY_SIZE; i++)
    {
        if (_inventory[i] != NULL)
            delete _inventory[i];
        if (character.getInventory(i) == NULL)
            _inventory[i] = NULL;
        else
            _inventory[i] = character.getInventory(i)->clone();
    }
    for (int i = 0; i < 1000; i++)
    {
        if (_ground[i] != NULL)
            delete _ground[i];
        if (character.getGround(i) == NULL)
            _ground[i] = NULL;
        else
            _ground[i] = character.getGround(i)->clone();
    }
    return *this;
}

// [**** Getter & Setter Functions ****]

std::string const   &Character::getName() const
{
    return _name;
}

AMateria const      *Character::getInventory(int index) const
{
    if (index >= 0 && index < INVENTORY_SIZE)
        return _inventory[index];
    return NULL;
}

AMateria const      *Character::getGround(int index) const
{
    if (index >= 0 && index < 1000)
        return _ground[index];
    return NULL;
}

// [**** Member Functions ****]

void    Character::equip(AMateria* m)
{
    if (m == NULL)
    {
        std::cout << "You can't equip a NULL materia." << std::endl;
        return ;
    }
    for (int i = 0; i < INVENTORY_SIZE; i++)
    {
        if (!_inventory[i])
        {
            _inventory[i] = m;
            return ;
        }
    }
    std::cout << "You can't equip more than " << INVENTORY_SIZE << " materia." << std::endl;
}

void    Character::unequip(int index)
{
    if (index >= INVENTORY_SIZE || index < 0)
        std::cout << "You can't unequip a materia that doesn't exist." << std::endl;
    else if (count_ground >= 1000)
    {
        std::cout << "You can't unequip a materia because the ground is full." << std::endl;
    }
    else if (!_inventory[index])
        std::cout << "You can't unequip a materia that doesn't exist." << std::endl;
    else
    {
        _ground[count_ground] = _inventory[index];
        count_ground++;
        _inventory[index] = NULL;
    }
}

void    Character::use(int index, ICharacter& target)
{
    if (index >= INVENTORY_SIZE || index < 0)
        std::cout << "You can't use a materia that doesn't exist." << std::endl;
    else if (!_inventory[index])
        std::cout << "You can't use a materia that doesn't exist." << std::endl;
    else
        _inventory[index]->use(target);
}

// [**** Destructor ****]

Character::~Character()
{
    for (int i = 0; i < INVENTORY_SIZE; i++)
    {
        if (_inventory[i] != NULL)
            delete _inventory[i];
    }
    for (int i = 0; i < 1000; i++)
    {
        if (_ground[i] != NULL)
            delete _ground[i];
    }
    std::cout << "Character has been destroyed. --> deconstructor" << std::endl;
}