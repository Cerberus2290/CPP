/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:56:19 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/12 00:58:51 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    Harl    HarlLevel;
    if (argc == 1)
    {
        std::string input;
        std::cout << "Enter Harl's status : ";
        std::cin >> input;
        HarlLevel.complain(input);
    }
    else
    {
        HarlLevel.complain(argv[1]);
    }
}