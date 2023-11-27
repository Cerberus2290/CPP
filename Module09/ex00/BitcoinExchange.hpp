/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:09:14 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/24 13:26:10 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <utility>
#include <algorithm>
#include <vector>
#include <sstream>
#include <ctime>
#include <iomanip>
#include <cmath>

bool        isValidDate(const std::string &date);
std::string isValidValue(const std::string &value);
bool        checkFile(const std::string filename, std::ifstream &file);
void        flagInvalidInput(std::vector<std::pair<std::string, std::string> > &input);
bool        fillInput(std::ifstream &file, std::vector<std::pair<std::string, std::string> > &input);
void        fillDatabase(std::ifstream &file, std::vector<std::pair<std::string, double> > &input_data);
int         binarySearch(const std::string &targetdate, const std::vector<std::pair<std::string, double> > &input_data);
void        printAndExecute(const std::vector<std::pair<std::string, std::string> > &input, const std::vector<std::pair<std::string, double> > &input_data);

#endif