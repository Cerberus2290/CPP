/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:42:57 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/23 14:45:17 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <string>

template< typename T >

void iter(T *arr, size_t arr_len, void (*hello)(T &))
{
    if (arr == NULL || hello == NULL)
        return ;
    for (size_t i = 0; i < arr_len; i++)
        hello(arr[i]);
}

#endif