/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:38:48 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/27 14:40:18 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error main: Syntax error - " << std::endl;
        return EXIT_FAILURE;
    }
    else
    {
        std::ifstream file;
        std::vector<std::pair<std::string, std::string> > input;
        std::vector<std::pair<std::string, double> > input_data;
        if (checkFile(argv[1], file) == false)
            return EXIT_FAILURE;
        if (fillInput(file, input) == false)
        {
            std::cerr << "Error main: File is empty" << std::endl;
            return EXIT_FAILURE;
        }
        flagInvalidInput(input);
        if (!checkFile("data.csv", file))
            return EXIT_FAILURE;
        fillDatabase(file, input_data);
        printAndExecute(input, input_data);
    }
}