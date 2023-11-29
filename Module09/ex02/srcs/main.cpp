/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:53:24 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/29 05:35:26 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "Syntax Error: " << argv[0] << " positive int seperated by spaces" << std::endl;
        return 1;
    }

    std::vector<int> sequenceVector;
    std::list<int> sequenceList;

    for (int i = 1; i < argc; i++)
    {
        int num = std::atoi(argv[i]);
        sequenceVector.push_back(num);
        sequenceList.push_back(num);
    }
    
    clock_t startVector = clock();
    fordJohnsonVector(sequenceVector);
    clock_t endVector = clock();

    clock_t startList = clock();
    fordJohnsonList(sequenceList);
    clock_t endList = clock();

    std::cout << "Before:\t";
    for (std::vector<int>::iterator ito = sequenceVector.begin(); ito != sequenceVector.end(); ++ito)
        std::cout << *ito << " ";
    std::cout << std::endl;

    std::cout << "After:\t";
    for (std::list<int>::iterator ito = sequenceList.begin(); ito != sequenceList.end(); ++ito)
        std::cout << *ito << " ";
    std::cout << std::endl;

    std::cout << "Time to process a range of [" << sequenceVector.size() << "] elements with std::vector<int> : " << static_cast<double>(endVector - startVector) / CLOCKS_PER_SEC * 1000000 << " s." << std::endl;
    
    std::cout << "Time to process a range of [" << sequenceList.size() << "] elements with std::list<int> : " << static_cast<double>(endList - startList) / CLOCKS_PER_SEC * 1000000 << " s." << std::endl;

    return 0;
}