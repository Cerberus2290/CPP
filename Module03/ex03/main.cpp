/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:11:15 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/05 11:14:59 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void )
{
    DiamondTrap dbot0;
    DiamondTrap dbot1("Diamondbot");
    DiamondTrap dbot2(dbot1);
    DiamondTrap dbot3("The Glorious Diamond");

    dbot0.whoAmI();
    dbot0.attack("Mordegon");
    dbot1.whoAmI();
    dbot1.attack("Mordegon");
    dbot2.whoAmI();
    dbot2.attack("Mordegon");
    dbot0 = dbot3;
    dbot0.whoAmI();
    dbot0.attack("Mordegon");

    return 0;
}