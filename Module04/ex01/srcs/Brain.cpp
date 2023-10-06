/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:37:10 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/06 14:04:31 by tstrassb         ###   ########.fr       */
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
    *this = brain;
    std::cout << "Brain has been created. --> copy constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]

Brain&  Brain::operator=(const Brain &brain)
{
    for (size_t i(0); i < BRAIN_SIZE; ++i)
        _ideas[i] = brain._ideas[i];
    return *this;
}

// [**** Destructor ****]

Brain::~Brain()
{
    std::cout << "Brain has been destroyed. --> deconstructor" << std::endl;
}