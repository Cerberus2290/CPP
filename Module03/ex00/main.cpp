/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:53:16 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/04 13:01:49 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap    bot("Box");

    bot.attack("Claptrap");
    bot.attack("Claptrap");
    bot.attack("Claptrap");
    bot.attack("Claptrap");
    bot.attack("Claptrap");
    bot.attack("Claptrap");
    bot.attack("Claptrap");
    bot.takeDamage(8);
    bot.attack("Claptrap");
    bot.beRepaired(5);
    bot.beRepaired(5);
    bot.beRepaired(5);
    bot.takeDamage(18);
    bot.takeDamage(20);
    bot.beRepaired(5);
    bot.beRepaired(5);
    bot.attack("void");

    return 0;
}