/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:31:42 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/24 06:58:13 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Array.hpp"
#include <cstdlib>
#include <iostream>

#define MAX_VALUE 750

int main(int, char**)
{
    Array<int> num(MAX_VALUE);
    int* mirror = new int[MAX_VALUE];
    srand(time(NULL));
    for (int i = 0; i < MAX_VALUE; i++)
    {
        const int value = rand();
        num[i] = value;
        mirror[i] = value;
    }
    
    {
        Array<int> temp;
        try
        {
            for (int i = 0; i < MAX_VALUE; i++)
                std::cout << "temp[" << i << "]:\t" << temp[i] << std::endl;
        }
        catch (const std::exception &except)
        {
            std::cerr << except.what() << '\t';
            std::cerr << "Error: Access to index out of bound of '[]' operator detected." << std::endl;
        }
        temp = num;
        Array<int> test(temp);
        try
        {
            for (int i = 0; i < MAX_VALUE; i++)
            {
                if (temp[i] != test[i])
                {
                    std::cerr << "did not save the same value!" << std::endl;
                    return 1;
                }
            }
        }
        catch (const std::exception &except)
        {
            std::cerr << except.what() << '\t';
            std::cerr << "Error: Access to index out of bound of '[]' operator detected." << std::endl;
        }
        std::cout << std::endl << "test[1]:\t" << test[1] << std::endl;
        std::cout << "temp[1]:\t" << temp[1] << std::endl << std::endl;

        test[1] = 123456789;

        std::cout << "test[1]:\t" << test[1] << std::endl;
        std::cout << "temp[1]:\t" << temp[1] << std::endl << std::endl;
    }

    for (int i = 0; i < MAX_VALUE; i++)
    {
        if (mirror[i] != num[i])
        {
            std::cerr << "did not save the same value!" << std::endl;
            return 1;
        }
    }
    try
    {
        num[-2] = 0;
    }
    catch (const std::exception &except)
    {
        std::cerr << except.what() << std::endl;
    }
    try
    {
        num[MAX_VALUE] = 0;
    }
    catch (const std::exception &except)
    {
        std::cerr << except.what() << std::endl;
    }

    for (int i = 0; i < MAX_VALUE; i++)
    {
        num[i] = rand();
    }
    delete [] mirror;
    
    return 0;
}