/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:33:18 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/23 09:35:36 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error main: Wrong number of arguments. - 1 argument." << std::endl;
        return 1;
    }
    try
    {
        ScalarConverter sc(argv[1]);
    }
    catch (const ScalarConverter::ConversionException& ce)
    {
        std::cerr << ce.what() << std::endl;
    }
    return 0;
}