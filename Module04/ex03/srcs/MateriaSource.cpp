/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:10:18 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/10 13:18:12 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/MateriaSource.hpp"

// [**** Constructors ****]

MateriaSource::MateriaSource()
{
    for (size_t i(0); i < INVENTORY_SIZE; ++i)
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
    for (size_t i(0); i < INVENTORY_SIZE; ++i)
        _slots[i] = matsource._slots[i];
    return *this;
}

// [**** Member Functions ****]

void    MateriaSource::learnMateria(AMateria *amat)
{
    for (size_t i(0); i < INVENTORY_SIZE; ++i)
    {
        if (_slots[i] == NULL)
        {
            _slots[i] = amat;
            break ;
        }
    }
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
    for (size_t i(0); i < INVENTORY_SIZE; ++i)
        delete _slots[i];
    std::cout << "MateriaSource has been destroyed. --> deconstructor" << std::endl;
}