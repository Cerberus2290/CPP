/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:58:07 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/24 09:04:51 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <iterator>
#include <climits>

class   Span
{
    private:
        std::vector<int> _vector;
        unsigned int     _size;
        unsigned int     _position;
        Span();

    public:
        // Constructor
        Span(unsigned int num);
        Span(const Span&);

        // Overload Assignment Operator
        Span& operator=(const Span&);
        
        // Member Function
        void addNumber(int num);
        void addNumber(unsigned int range, time_t seed);
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;

        // Getters
        unsigned int getSize() const;
        unsigned int getPosition() const;
        
        // Destructor
        ~Span();

        // Exception Class
        class VectorInvalidException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class ArrayFullException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class ComparisonInvalidException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

#endif