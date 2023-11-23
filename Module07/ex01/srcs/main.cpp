/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:46:20 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/23 14:54:19 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../iter.hpp"
#include <iostream>
#include <cctype>

void ft_tolower(char &arr)
{
    arr = std::tolower(static_cast<unsigned char>(arr));
}

void ft_toupper(char &arr)
{
    arr = std::toupper(static_cast<unsigned char>(arr));
}

int main()
{
    char chara[] = {'A', 'B', 'C'};

    std::cout << "Original: "
    << "\n\tchara[0]: " << chara[0]
    << "\n\tchara[1]: " << chara[1]
    << "\n\tchara[2]: " << chara[2]
    << std::endl << std::endl;

    ::iter(chara , sizeof(chara) / sizeof(char), ft_tolower);

    std::cout << "Changed: "
    << "\n\tchara[0]: " << chara[0]
    << "\n\tchara[1]: " << chara[1]
    << "\n\tchara[2]: " << chara[2]
    << std::endl << std::endl;

    ::iter(chara, 4, ft_toupper);

    std::cout << "Changed Again: "
    << "\n\tchara[0]: " << chara[0]
    << "\n\tchara[1]: " << chara[1]
    << "\n\tchara[2]: " << chara[2]
    << std::endl << std::endl;
}