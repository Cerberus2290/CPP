/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 06:44:00 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/23 07:31:48 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ScalarConverter.hpp"

// [**** Constructors ****]
ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter created. --> Default constructor" << std::endl;
}

ScalarConverter::ScalarConverter(const std::string input) : _input(input)
{
    std::cout << "Conversion Constructor for " << this->getInput() << std::endl;
    this->_double = atof(this->getInput().c_str());
    this->convertInput();
    this->printOutput();
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) : _input(copy.getInput())
{
    std::cout << "ScalarConverter created. --> Copy constructor" << std::endl;
    *this = copy;
    this->printOutput();
}

// [**** Overload Assignment Operators ****]
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs)
{
    std::cout << "ScalarConverter created. --> Assignment operator" << std::endl;
    if (this == &rhs)
        return *this;

    this->_type = rhs.getType();
    this->_char = rhs.getChar();
    this->_int = rhs.getInt();
    this->_float = rhs.getFloat();
    this->_double = rhs.getDouble();
    return *this;
}

// [**** Member Functions ****]
int ScalarConverter::checkInut()
{
    if (this->getInput().compare("nan") == 0 || this->getInput().compare("-inf") == 0
        || this->getInput().compare("+inf") == 0 || this->getInput().compare("-inff") == 0
        || this->getInput().compare("+inff") == 0)
        return NAN_INF;
    else if (this->getInput().length() == 1 && (this->getInput()[0] == '-'
        || this->getInput()[0] == '+' || this->getInput()[0] == '.' || this->getInput()[0] == 'f'))
        return CHAR;
    else if (this->getInput().find_first_of("+-") != this->getInput().find_last_of("+-"))
        return ERROR;
    else if (this->getInput().find_first_not_of("+-0123456789") == std::string::npos)
        return INT;
    else if (this->getInput().find_first_not_of("+-0123456789.") == std::string::npos)
    {
        if (this->getInput().find_first_of(".") != this->getInput().find_last_of(".")
            || isdigit(this->getInput()[this->getInput().find_first_of(".") + 1]) == false
            || this->getInput().find_first_of(".") == 0)
            return ERROR;
        else
            return DOUBLE;
    }
    else if (this->getInput().find_first_not_of("+-0123456789.f") == std::string::npos)
    {
        if (this->getInput().find_first_of("f") != this->getInput().find_last_of("f")
            || this->getInput().find_first_of(".") != this->getInput().find_last_of(".")
            || this->getInput().find_first_of("f") - this->getInput().find_first_of(".") == 1
            || this->getInput()[this->getInput().find_first_of("f") + 1] != '\0')
            return ERROR;
        else
            return FLOAT;
    }
    else if ((this->getInput().length() == 1 && std::isprint(this->getInput()[0]))
        || (this->getInput().length() == 1 && std::isalpha(this->getInput()[0])))
        return CHAR;
    else
        return ERROR;
}

void ScalarConverter::convertChar()
{
    this->_char = static_cast<unsigned char>(this->getInput()[0]);
    this->_int = static_cast<int>(this->getChar());
    this->_float = static_cast<float>(this->getChar());
    this->_double = static_cast<double>(this->getChar());
}

void ScalarConverter::convertInt()
{
    this->_int = static_cast<int>(this->getDouble());
    this->_char = static_cast<unsigned char>(this->getInt());
    this->_float = static_cast<float>(this->getDouble());
}

void ScalarConverter::convertFloat()
{
    this->_float = static_cast<float>(this->getDouble());
    this->_char = static_cast<char>(this->getFloat());
    this->_int = static_cast<int>(this->getFloat());
}

void ScalarConverter::convertDouble()
{
    this->_char = static_cast<char>(this->getDouble());
    this->_int = static_cast<int>(this->getDouble());
    this->_float = static_cast<float>(this->getDouble());
}

void ScalarConverter::convertInput()
{
    void (ScalarConverter::*functionsPTRS[])(void) = {&ScalarConverter::convertChar, &ScalarConverter::convertInt, &ScalarConverter::convertFloat, &ScalarConverter::convertDouble};
    int types[] = {CHAR, INT, FLOAT, DOUBLE};

    this->_type = checkInut();

    if (this->getType() == NAN_INF)
        return ;
    int i;
    for (i = 0; i < 4; i++)
    {
        if (this->getType() != NAN_INF && this->getDouble() <= UCHAR_MAX && this->getDouble() >= 0)
        {
            if (isprint(this->getChar()))
                std::cout << "char: '" << this->getChar() << "'" << std::endl;
            else
                std::cout << "char: cannot be displayed" << std::endl;
        }
        else
            std::cout << "char: impossible to display" << std::endl;
    }
}

// [**** Destructor ****]
ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter destroyed." << std::endl;
}