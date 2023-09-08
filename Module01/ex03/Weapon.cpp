/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:11:19 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/08 07:52:27 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    _type = type;
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

std::string Weapon::getType()
{
    return _type;
}

void    Weapon::setType(std::string type)
{
    _type = type;
}