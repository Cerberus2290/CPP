/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:22:48 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/04 13:27:52 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
    ClapTrap    clapbot("Clapbot");
    ScavTrap    scavbot("Scavbot");

    clapbot.attack("some robots");
    scavbot.attack("Clapbot");
    clapbot.takeDamage(20);
    clapbot.takeDamage(20);
    clapbot.beRepaired(20);
    scavbot.attack("some robots");
    scavbot.takeDamage(40);
    scavbot.beRepaired(30);
    scavbot.guardGate();
    scavbot.beRepaired(240);

    return 0;
}