/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:39:17 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/24 09:46:04 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Span.hpp"

int main()
{
    Span a = Span(5);
    for (size_t i = 0; i < 6; i++)
    {
        try
        {
            a.addNumber(i);
        }
        catch (std::exception &except)
        {
            std::cerr << std::endl << except.what() << std::endl;
        }
    }
    std::cout << "Shortest Span: " << a.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << a.longestSpan() << std::endl;

    std::cout << std::endl << "******************************************************" << std::endl << std::endl;

    Span b = Span(10000);
    b.addNumber(10000, time(NULL));
    std::cout << "Shortest Span: " << b.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << b.longestSpan() << std::endl;

    return 0;
}