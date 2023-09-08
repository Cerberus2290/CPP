/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:17:40 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/08 08:10:30 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &newWeapon) : _weapon(newWeapon)
{
    _name   =   name;
}

void    HumanA::attack()
{
    std::cout << _name << " attacks with " << _weapon.getType() << std::endl;
}