/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:22:16 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/04 14:25:10 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
    ScavTrap    scavbot("Scavbot");
    FragTrap    fragbot("Fragbot");
    
    fragbot.attack("Scavbot");
    scavbot.takeDamage(30);
    scavbot.attack("Fragbot");
    fragbot.takeDamage(20);
	fragbot.attack("Scavbot");
	scavbot.takeDamage(30);
	scavbot.attack("Fragbot");
	fragbot.takeDamage(20);
	fragbot.attack("Scavbot");
	scavbot.takeDamage(30);
	scavbot.attack("Fragbot");
	fragbot.takeDamage(20);
	scavbot.guardGate();
	scavbot.beRepaired(240);
	fragbot.highFivesGuys();
	scavbot.attack("Fragbot");
	fragbot.takeDamage(20);
	scavbot.attack("Fragbot");
	fragbot.takeDamage(20);
	scavbot.attack("Fragbot");
	fragbot.takeDamage(20);

    return 0;    
}