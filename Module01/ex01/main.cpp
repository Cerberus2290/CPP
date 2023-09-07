/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:03:48 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/07 15:13:29 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  *horde = zombieHorde(7, "Well spoken Zombie");

    for (int i = 0; i < 7; i++)
        horde[i].announce();
    
    delete[](horde);
}