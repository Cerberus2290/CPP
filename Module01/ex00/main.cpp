/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 06:49:21 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/12 02:57:46 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  zom1("Well spoken Zombie1");
    Zombie  *zom2 = newZombie("Well spoken Zombie2");
    zom2->announce();
    randomChump("Well spoken Zombie3");
    delete(zom2);
    return 0;
}