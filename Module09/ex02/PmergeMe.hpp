/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 08:58:47 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/28 16:34:27 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <ctime>
#include <iterator>

void fordJohnsonVector(std::vector<int>& sequence);
void fordJohnsonList(std::list<int>& sequence);

#endif