/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 08:58:47 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/28 10:00:17 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <list>
#include <deque>
#include <climits>
#include <ctime>

bool inputControl(int argc, char **argv, std::list<int> &_list, std::deque<int> &_deque);

template< typename T >
void insertionSort(T& merge)
{
    int temp;
    typename T::iterator left;
    typename T::iterator previous;
    typename T::iterator right;
    
    for (left = merge.begin(); left != merge.end(); ++left)
    {
        temp = *left;
        right = left;
        while (right != merge.begin())
        {
            previous = right;
            --previous;
            if (*previous > temp)
            {
                *right = *previous;
                --right;
            }
            else
                break ;
        }
        *right = temp;
    }
}

template< typename T >
void mergeInsertionSort(T& merge)
{
    size_t length = merge.size();
    size_t cap = 100;

    if (length > cap)
    {
        typename T::iterator begin = merge.begin();
        typename T::iterator mid = merge.begin();
        std::advance(mid, merge.size() / 2);
        typename T::iterator end = merge.end();
        T left(begin, mid);
        T right(mid, end);
        if (left.size() > 1)
            mergeInsertionSort(left);
        if (right.size() > 1)
            mergeInsertionSort(right);
        std::merge(left.begin(), left.end(), right.begin(), right.end(), merge.begin());
    }
    else
        insertionSort(merge);
}

#endif