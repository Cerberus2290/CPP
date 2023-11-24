/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:02:33 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/24 11:26:38 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <class T>

class   MutantStack : public std::stack<T>
{
    public:
        typedef std::stack<T> stack;
        typedef typename stack::container_type container;
        typedef typename container::iterator ito;
        
        // Constructor
        MutantStack() : stack()
        {
            std::cout << "Default Constructor." << std::endl;
        }
        
        MutantStack(const stack &copy) : stack(copy)
        {
            std::cout << "Copy Constructor." << std::endl;
        }
        
        // Overload Assignment Operator
        stack& operator=(const stack &rhs)
        {
            if (*this != rhs)
                *this = rhs;
            return *this;
        }
        
        // Member Function
        ito begin()
        {
            return (stack::c.begin());
        }

        ito end()
        {
            return (stack::c.end());
        }
        
        // Destructor
        ~MutantStack()
        {
            std::cout << "MutantStack destroyed." << std::endl;
        }
};

#endif