/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 07:40:54 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/08 08:10:34 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
    _name = name;
}

void    HumanB::setWeapon(Weapon &one)
{
    _weapon = &one;
}

void    HumanB::attack()
{
    std::cout << _name << " attacks with " << _weapon->getType() << std::endl;
}