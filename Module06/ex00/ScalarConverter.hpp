/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 06:36:26 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/23 09:18:15 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <limits>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <cctype>

#define NAN_INF 1
#define ERROR 2
#define CHAR 3
#define INT 4
#define FLOAT 5
#define DOUBLE 6

class   ScalarConverter
{
    private:
        const std::string   _input;
        int                 _type;
        char                _char;
        int                 _int;
        float               _float;
        double              _double;
        
        // Constructor
        ScalarConverter();

        // Member Function
        int checkInut(void);
        void convertInput(void);
        void convertChar(void);
        void convertInt(void);
        void convertFloat(void);
        void convertDouble(void);

        void printOutput(void) const;

        // Getters
        std::string getInput(void) const;
        int getType(void) const;
        char getChar(void) const;
        int getInt(void) const;
        float getFloat(void) const;
        double getDouble(void) const;
        
    public:
        // Constructor
        ScalarConverter(const std::string input);
        ScalarConverter(const ScalarConverter&);
        
        // Overload Assignment Operator
        ScalarConverter& operator=(const ScalarConverter&);
        
        // Destructor
        ~ScalarConverter();

        // Exception Class
        class ConversionException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

#endif