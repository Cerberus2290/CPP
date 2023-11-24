/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:12:56 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/24 08:18:43 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iterator>
#include <iostream>
#include <exception>

class   NotFoundException : public std::exception
{
    public:
        virtual const char *what() const throw()
        {
            return ("Error: Value not found!");
        }
};

template< typename T >
typename T::iterator easyfind(T &in, int i)
{
    typename T::iterator    ito;
    ito = find(in.begin(), in.end(), i);
    if (ito == in.end())
        throw (NotFoundException());
    return ito;
}

#endif