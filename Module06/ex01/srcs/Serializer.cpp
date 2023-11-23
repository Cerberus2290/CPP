/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:20:55 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/23 13:27:33 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Serializer.hpp"

// [**** Constructors ****]
Serializer::Serializer()
{
    std::cout << "Serializer created. --> Default Constructor" << std::endl;
}

Serializer::Serializer(const Serializer &copy)
{
    std::cout << "Serializer created. --> Copy Constructor" << std::endl;
    *this = copy;
}

// [**** Overload Assignment Operators ****]
Serializer &Serializer::operator=(const Serializer &rhs)
{
    std::cout << "Serializer created. --> Assignment Constructor" << std::endl;
    if (this == &rhs)
        return *this;

    return *this;
}

// [**** Member Functions ****]
uintptr_t Serializer::serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

// [**** Destructor ****]
Serializer::~Serializer()
{
    std::cout << "Serializer destroyed." << std::endl;
}