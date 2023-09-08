/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 07:43:39 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/08 08:06:34 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main()
{
    {
        Weapon  club = Weapon("crude spiked club");
    
        HumanA cloud("Cloud", club);
        cloud.attack();
        club.setType("some other type of club");
        cloud.attack();
    }
    std::cout << std::endl;
    {
        Weapon  club = Weapon("crude spiked club");
        
        HumanB squall("Squall");
        squall.setWeapon(club);
        squall.attack();
        club.setType("some other type of club");
        squall.attack();
    }
    return 0;
}