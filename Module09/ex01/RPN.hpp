/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:18:21 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/28 07:24:59 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <stack>
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

typedef enum
{
    add         = '+',
    substract   = '-',
    divide      = '/',
    mulitply    = '*',
} operant_t;

class   RPN
{
    private:
        RPN();
        RPN(const RPN&);
        RPN &operator=(const RPN&);

    public:
        static std::string parameter;
        static int count;
        static float value;
        static float first;
        static float second;
        static std::stack<float> stack_value;
        static std::stack<char> operant;

        // Member Function
        static void wordCount(std::string parameter);
        static bool fillCheckString(std::string* array);
        static bool handlePolish(std::string const *array);

        // Destructor
        ~RPN();
};

#endif