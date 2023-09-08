/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceFiles.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 08:48:42 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/08 09:31:31 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ReplaceFiles.hpp"

ReplaceFiles::ReplaceFiles(char *filename)
{
    std::ifstream withinFile(filename);
    std::string ret = "";
    std::string temp;

    while ( getline(withinFile, temp) )
    {
        ret += temp + "\n";
    }
    _text = ret;
    _filename = filename;
}

ReplaceFiles::~ReplaceFiles()
{
    _filename += ".replace";
    std::cout << _filename << " was created." << std::endl;
    std::ofstream outfile(_filename.c_str());
    outfile << _text;
    outfile.close();
}

std::string ReplaceFiles::getText()
{
    return _text;
}

void    ReplaceFiles::replace(char *s1, char *s2)
{
    std::string newString = "";
    const char  *str = _text.c_str();
    int i = 0;
    
    int j, k;
    while (str[i])
    {
        j = 0;
        k = 0;
        while (str[i + j] == s1[k])
        {
            j++;
            k++;
            if (!s1[k])
            {
                i += j;
                newString += s2;
            }
        }
        newString += str[i++];
    }
    _text = newString;
}