/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:05:00 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/12 02:58:28 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    Harl    levelHarl;
    if (argc == 1)
    {
        std::string input;
        std::cout << "Enter Harl's status" << std::endl;
        std::cout << "Options are: DEBUG, INFO, WARNING, ERROR" << std::endl;
        std::cout << "Write one option in all caps : ";
        std::cin >> input;
        levelHarl.complain(input);
    }
    else
    {
        levelHarl.complain(argv[1]);
    }
    return 0;
}