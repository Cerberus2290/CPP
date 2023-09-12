/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:49:52 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/12 01:59:20 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>


void    Harl::debug()
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!";
	std::cout << std::endl;
}

void Harl::info()
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!";
	std::cout << std::endl;
}

void Harl::warning()
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.";
	std::cout << std::endl;
}

void Harl::error()
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void    Harl::complain( std::string level )
{
    std::string lvl[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int ctrl = 0;
    while (ctrl < 4 && lvl[ctrl].compare(level))
        ctrl++;
    switch (ctrl)
    {
        case 0:
            this->debug();
            break ;
        case 1:
            this->info();
            break ;
        case 2:
            this->warning();
            break ;
        case 3:
            this->error();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}