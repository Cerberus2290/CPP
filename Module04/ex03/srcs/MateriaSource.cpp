/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:10:18 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 15:57:30 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/MateriaSource.hpp"

// [**** Constructors ****]

MateriaSource::MateriaSource()
{
    for (size_t i(0); i < INVENTORY_SIZE; i++)
        _slots[i] = NULL;
    std::cout << "MateriaSource has been created. --> default constructor" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &matsource)
{
    *this = matsource;
    std::cout << "MateriaSource has been created. --> copy constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]

MateriaSource& MateriaSource::operator=(const MateriaSource &matsource)
{
    for (size_t i(0); i < INVENTORY_SIZE; i++)
    {
        if (_slots[i])
            delete _slots[i];
        if (matsource._slots[i] == NULL)
            _slots[i] = NULL;
        else
            _slots[i] = matsource._slots[i]->clone();
    }
    std::cout << "MateriaSource has been created. --> copy assignment constructor" << std::endl;
    return *this;
}

// [**** Member Functions ****]

void    MateriaSource::learnMateria(AMateria *amat)
{
    if (amat == NULL)
    {
        std::cout << "MateriaSource can't learn this materia. --> learnMateria" << std::endl;
        return ;
    }
    for (int i = 0; i < INVENTORY_SIZE; i++)
    {
        if (_slots[i] == NULL)
        {
            _slots[i] = amat;
            std::cout << "MateriaSource has learned " << amat->getType() << "at slot number: " << i << std::endl;
            return ;
        }
    }
    std::cout << "MateriaSource is full of Materia." << std::endl;
}

AMateria*   MateriaSource::createMateria(std::string const &type)
{
    for (size_t i(0); i < INVENTORY_SIZE; ++i)
    {
        if (_slots[i] != NULL && _slots[i]->getType() == type)
            return (_slots[i]->clone());
    }
    return 0;
}

// [**** Destructor ****]

MateriaSource::~MateriaSource()
{
    for (size_t i(0); i < INVENTORY_SIZE; i++)
    {
        if (_slots[i])
            delete _slots[i];
    }
    std::cout << "MateriaSource has been destroyed. --> deconstructor" << std::endl;
}