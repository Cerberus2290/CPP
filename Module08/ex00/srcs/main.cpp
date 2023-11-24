/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:19:29 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/24 08:26:34 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../easyfind.hpp"
#include <list>

int main()
{
    std::list<int> test;
    test.push_back(140);
    test.push_back(141);
    test.push_back(142);

    std::list<int>::const_iterator cito = test.end();

    try
    {
        cito = ::easyfind(test, 140);
        cito = ::easyfind(test, 142);
    }
    catch (std::exception &except)
    {
        std::cerr << except.what() << std::endl;
    }

    if (cito != test.end())
        std::cout << *cito << " found it!" << std::endl;
    cito = test.end();

    try
    {
        cito = ::easyfind(test, 42);
        cito = ::easyfind(test, 43);
    }
    catch (std::exception &except)
    {
        std::cerr << except.what() << std::endl;
    }

    if (cito != test.end())
        std::cout << *cito << "found it!" << std::endl;
    
    return 0;
}