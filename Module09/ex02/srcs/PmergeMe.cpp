/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:48:20 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/28 16:48:15 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PmergeMe.hpp"

void fordJohnsonVector(std::vector<int>& sequence)
{
    std::vector<int> machineA, machineB;

    for (std::vector<int>::iterator ito = sequence.begin(); ito != sequence.end(); ++ito)
    {
        int num = *ito;
        if (num < 0)
        {
            std::cerr << "Error fordJohnsonVector: only positive int allowed" << std::endl;
            exit(1);
        }
        else if (num == 0)
        {
            std::cerr << "Error fordJohnsonVector: zero is not allowed" << std::endl;
            exit(1);
        }
        if (num % 2 == 0)
            machineA.push_back(num);
        else
            machineB.push_back(-num);
    }
    std::sort(machineA.begin(), machineA.end());
    std::sort(machineB.begin(), machineB.end());
    
    sequence.clear();
    for (std::vector<int>::iterator ito = machineA.begin(); ito != machineA.end(); ++ito)
        sequence.push_back(*ito);
    for (std::vector<int>::iterator ito = machineB.begin(); ito != machineB.end(); ++ito)
        sequence.push_back(-(*ito));
}

void fordJohnsonList(std::list<int>& sequence)
{
    std::list<int> machineA, machineB;

    for (std::list<int>::iterator ito = sequence.begin(); ito != sequence.end(); ++ito)
    {
        int num = *ito;
        if (num < 0)
        {
            std::cerr << "Error fordJohnsonList: only positive int allowed" << std::endl;
            exit(1);
        }
        else if (num == 0)
        {
            std::cerr << "Error fordJohnsonList: zero is not allowed" << std::endl;
            exit(1);
        }
        if (num % 2 == 0)
            machineA.push_back(num);
        else
            machineB.push_back(-num);
    }
    machineA.sort();
    machineB.sort();

    sequence.clear();
    sequence.merge(machineA);
    for (std::list<int>::iterator ito = machineB.begin(); ito != machineB.end(); ++ito)
        sequence.push_back(-(*ito));
}