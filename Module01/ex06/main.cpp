/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:56:19 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/12 02:05:35 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        return (std::cout << "Syntax error:\nUsage: ./harlFilter [level]\n", 1);
    }
    std::string input = argv[1];
    Harl    HarlLevel;
    
    HarlLevel.complain(input);
    return 0;
}