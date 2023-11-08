/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:22:16 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 07:05:51 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
    ClapTrap	clapbot("Clapbot");
	ScavTrap	scavbot("Scavbot");
	FragTrap	fragbot("Fragbot");

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

	fragbot.attack("dummy bot 3");
	fragbot.takeDamage(9);
	fragbot.beRepaired(10);
	fragbot.attack("dummy bot 3");
	fragbot.takeDamage(105);
	fragbot.takeDamage(10);
	fragbot.attack("dummy bot 3");
	fragbot.highFivesGuys();

    return EXIT_SUCCESS;
}