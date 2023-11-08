/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:53:16 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 06:41:29 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap    defaultBox;
    defaultBox.attack("Dummy Trap");
    defaultBox.takeDamage(30);
    defaultBox.beRepaired(10);
    defaultBox.attack("Dummy Trap");
    
    ClapTrap    Box2("Box2");
    Box2.attack("Dummy Trap 2");
    Box2.takeDamage(9);
    Box2.beRepaired(10);
    Box2.attack("Dummy Trap 2");

    ClapTrap    Box2_duplicate(Box2);
    Box2_duplicate.attack("Dummy Trap 3");
    Box2_duplicate.takeDamage(10);
    Box2_duplicate.takeDamage(9);
    Box2_duplicate.takeDamage(9);
    Box2_duplicate.beRepaired(15);
    Box2_duplicate.attack("Dummy Trap 3");
    Box2_duplicate.beRepaired(15);
    Box2_duplicate.beRepaired(15);
    Box2_duplicate.beRepaired(15);
    Box2_duplicate.beRepaired(15);
    Box2_duplicate.beRepaired(15);
    Box2_duplicate.attack("Dummy Trap 3");

    return 0;
}