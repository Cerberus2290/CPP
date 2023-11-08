/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:22:48 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 06:56:40 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
    ClapTrap    clapbot("Clapbot");
    ScavTrap    scavbot("Scavbot");

    clapbot.attack("dummy bot");
    clapbot.takeDamage(30);
    clapbot.beRepaired(10);
    clapbot.attack("dummy bot");

    scavbot.attack("dummy bot 2");
    scavbot.takeDamage(9);
    scavbot.beRepaired(10);
    scavbot.attack("dummy bot 2");
    scavbot.takeDamage(105);
    scavbot.takeDamage(10);
    scavbot.attack("dummy bot 2");
    scavbot.guardGate();

    return 0;
}