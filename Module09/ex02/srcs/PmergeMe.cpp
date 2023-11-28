/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:48:20 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/28 09:52:59 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PmergeMe.hpp"

bool inputControl(int argc, char **argv, std::list<int> &_list, std::deque<int> &_deque)
{
    std::string word;
    std::stringstream ss;
    long list;
    char* endpointer = NULL;

    for (int i = 1; i < argc; i++)
        ss << argv[i] << " ";
    while (ss >> word)
    {
        endpointer = NULL;
        list = strtol(word.c_str(), &endpointer, 10);
        if (*endpointer == '\0' && list >= 0 && list < INT_MAX)
        {
            _list.push_back(list);
            _deque.push_back(list);
        }
        else
        {
            std::cout << word << " ";
            return false;
        }
    }
    return true;
}