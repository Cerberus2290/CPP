/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:53:31 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/11 16:16:48 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void    Harl::complain( std::string level )
{
    void    (Harl::*arr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levellist[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
        if (levellist[i] == level)
            (this->*(arr[i]))();
}

void    Harl::debug()
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!";
    std::cout << std::endl;
}

void    Harl::info()
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!";
    std::cout << std::endl;
}

void    Harl::warning()
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.";
    std::cout << std::endl;
}

void    Harl::error()
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.";
    std::cout << std::endl;
}