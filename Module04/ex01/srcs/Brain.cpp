/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:37:10 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 13:09:46 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Brain.hpp"

// [**** Constructors ****]

Brain::Brain()
{
    std::cout << "Brain has been created. --> default constructor" << std::endl;
}

Brain::Brain(const Brain &brain)
{
    for (int i = 0; i < BRAIN_SIZE; i++)
        _ideas[i] = brain.getIdea(i);
    std::cout << "Brain has been created. --> copy constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]

Brain&  Brain::operator=(const Brain &brain)
{
    for (int i =0; i < BRAIN_SIZE; i++)
        _ideas[i] = brain.getIdea(i);
    std::cout << "Brain has been created. --> copy assignment constructor" << std::endl;
    return *this;
}

// [**** Getter & Setter Functions ****]

std::string Brain::getIdea(int index) const
{
    if (index < 0 || index >= BRAIN_SIZE)
    {
        std::cout << "Index out of range" << std::endl;
        return NULL;
    }
    return _ideas[index];
}

void    Brain::setIdea(int index, std::string idea)
{
    if (index < 0 || index >= BRAIN_SIZE)
        std::cout << "Index out of range" << std::endl;
    else
        _ideas[index] = idea;
}

// [**** Destructor ****]

Brain::~Brain()
{
    std::cout << "Brain has been destroyed. --> deconstructor" << std::endl;
}