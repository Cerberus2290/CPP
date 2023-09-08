/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:14:09 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/08 09:18:33 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ReplaceFiles.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
        return 0;
    else if (std::cin.eof())
        return -1;
    
    ReplaceFiles thisFile(argv[1]);
    thisFile.replace(argv[2], argv[3]);
}