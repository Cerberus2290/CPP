/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:53:24 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/28 10:23:19 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cerr << "Syntax Error: Usage ./PmergeMe [positive list of int]" << std::endl;
        return 1;
    }
    
    std::list<int> _list;
    std::deque<int> _deque;
    
    if (inputControl(argc, argv, _list, _deque) == false)
    {
        std::cerr << "Error main: only positive int allowed" << std::endl;
        return 1;
    }
    // Print: before to standard out
    std::cout << "Before:\t";
    for (std::list<int>::iterator ito = _list.begin(); ito != _list.end(); ito++)
        std::cout << *ito << " ";
    std::cout << std::endl;
    // Sort using std::list and start timer
    std::clock_t time_begin = std::clock();
    mergeInsertionSort(_list);
    std::clock_t time_end = std::clock();
    // Print: after to standard out
    std::cout << "After:\t";
    for (std::list<int>::iterator ito = _list.begin(); ito != _list.end(); ito++)
        std::cout << *ito << " ";
    std::cout << std::endl;
    // Print: time for list sort
    double time_sort = static_cast<double>(time_end - time_begin) / (double)CLOCKS_PER_SEC * 1000000;
    std::cout << "Time to process a range of " << "[" << _list.size() << "]" << " elements with std::list<int> sort: " << time_sort << " us." << std::endl;
    // Sort using std::deque and start timer
    time_begin = std::clock();
    mergeInsertionSort(_deque);
    time_end = std::clock();
    // Print: time for deque sort
    time_sort = static_cast<double>(time_end - time_begin) / CLOCKS_PER_SEC * 1000000;
    std::cout << "Time to process a range of " << "[" << _deque.size() << "]" << " elements with std::deque<int> sort: " << time_sort << " us." << std::endl;

    return 0;
}