/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:48:20 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/29 05:45:00 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PmergeMe.hpp"

void fordJohnsonVector(std::vector<int>& sequence)
{
    std::vector<int> machineA, machineB;
    // Seperate even and odd numbers
    for (std::vector<int>::iterator ito = sequence.begin(); ito != sequence.end(); ++ito)
    {
        int num = *ito;
        if (num < 0)
        {
            std::cerr << "Error fordJohnsonVector: only positive int allowed" << std::endl;
            exit(1);
        }
        // check for negative and zero (error handling)
        else if (num == 0)
        {
            std::cerr << "Error fordJohnsonVector: zero is not allowed" << std::endl;
            exit(1);
        }
        // Machine A stores even numbers, Machine B stores odd numbers
        if (num % 2 != 0)
            machineA.push_back(num);
        else
            machineB.push_back(num);
    }
    //sorting Machine A and Machine B
    std::sort(machineA.begin(), machineA.end());
    std::sort(machineB.begin(), machineB.end());
    
    sequence.clear();
    // append sorted elements of the machines
    sequence.insert(sequence.end(), machineA.begin(), machineA.end());
    sequence.insert(sequence.end(), machineB.begin(), machineB.end());
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
        if (num % 2 != 0)
            machineA.push_back(num);
        else
            machineB.push_back(num);
    }
    machineA.sort();
    machineB.sort();

    sequence.clear();
    sequence.merge(machineA);
    sequence.merge(machineB);
}