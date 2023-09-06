/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 06:39:16 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/06 06:45:04 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name )
{
    _name = name;
}

Zombie::~Zombie()
{
    std::cout << _name << ": What a cruel world. All I wanted was BraiiiiiiinnnzzzZ *death noise*" << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}