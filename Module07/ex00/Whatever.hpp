/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:26:52 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/23 14:39:39 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename M >

const M &max(const M &x, const M &y)
{
    return (x >= y ? x : y);
}

template< typename E >

const E &min(const E &x, const E &y)
{
    return (x <= y ? x : y);
}

template< typename T >

void swap(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

#endif