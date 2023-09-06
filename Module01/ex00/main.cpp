/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 06:49:21 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/06 06:50:48 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  zom1("EA");
    Zombie  *zom2 = newZombie("CDPR");
    zom2->announce();
    randomChump("mwahahahaha");
    delete(zom2);
}