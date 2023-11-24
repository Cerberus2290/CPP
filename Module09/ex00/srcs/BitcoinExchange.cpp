/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:27:09 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/24 13:33:29 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../BitcoinExchange.hpp"

int binarySearch(const std::string &targetdate, const std::vector<std::pair<std::string, double> > &input_data)
{
    int left = 0;
    int right = input_data.size() - 1;
    int mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (input_data[mid].first == targetdate)
            return mid;
        else if (input_data[mid].first < targetdate)
            left = mid + 1;
        else
            right = mid - 1;
    }
    if (right < 0)
        return -1;
    else
        return right;
}

