/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:11:15 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 07:32:07 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void )
{
    ClapTrap ClapTank;
    DiamondTrap DiamondTank("DiamondTank");
    DiamondTrap DiamondTank_Duplicate(DiamondTank);

    ClapTank.attack("Dummy Tank");
    ClapTank.takeDamage(30);
    ClapTank.beRepaired(10);
    ClapTank.attack("Dummy Tank");

    DiamondTank.status();
    DiamondTank.attack("Dummy Tank 2");
    DiamondTank.takeDamage(9);
    DiamondTank.beRepaired(10);
    DiamondTank.attack("Dummy Tank 2");
    DiamondTank.takeDamage(105);
    DiamondTank.takeDamage(10);
    DiamondTank.attack("Dummy Tank 2");
    DiamondTank.highFivesGuys();
    DiamondTank.whoAmI();

    DiamondTank_Duplicate.attack("Dummy Tank 3");

    return 0;
}