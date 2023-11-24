/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:05:13 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/24 09:33:57 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Span.hpp"

// [**** Constructors ****]
Span::Span() : _size(0), _position(0)
{}

Span::Span(unsigned int num) : _size(num), _position(0)
{
    std::cout << "Constructor for Span with size of: " << num << std::endl;
    this->_vector.reserve(this->getSize());
}

Span::Span(const Span &copy) : _size(copy.getSize()), _position(copy.getPosition())
{
    std::cout << "Copy Constructor called." << std::endl;
    *this = copy;
}

// [**** Overload Assignment Operators ****]
Span &Span::operator=(const Span &rhs)
{
    std::cout << "Assignment operator called." << std::endl;
    if (this == &rhs)
        return *this;
    return *this;
}

// [**** Member Functions ****]
void Span::addNumber(int num)
{
    if ((this->_position != 0 && this->_vector.empty() == true) || this->_vector.max_size() < this->getSize())
        throw (Span::VectorInvalidException());
    if (this->getPosition() + 1 > this->getSize())
        throw (Span::ArrayFullException());
    else
    {
        this->_position++;
        this->_vector.push_back(num);
    }
}

void Span::addNumber(unsigned int range, time_t seed)
{
    srand(seed);
    for (size_t i = 0; i < range; i++)
    {
        try
        {
            addNumber(rand());
        }
        catch (const std::exception &except)
        {
            std::cerr << except.what() << std::endl;
        }
    }
}

unsigned int Span::shortestSpan() const
{
    if (this->_position == 1 || this->_vector.size() == 1)
        throw (Span::ComparisonInvalidException());
    std::vector<int> vec(this->_vector);
    std::sort (vec.begin(), vec.end());
    unsigned int ret = UINT_MAX;
    std::vector<int>::iterator ito = vec.begin();
    std::vector<int>::iterator ito_next = vec.begin() + 1;
    while (ito_next != vec.end())
    {
        if ((unsigned int)(*ito_next - *ito) < ret)
            ret = *ito_next - *ito;
        ++ito_next;
        ++ito;
    }
    return ret;
}

unsigned int Span::longestSpan() const
{
    if (this->_position == 1 || this->_vector.size() == 1)
        throw (Span::ComparisonInvalidException());
    std::vector<int> vec(this->_vector);
    int low, high;
    std::sort(vec.rbegin(), vec.rend());
    high = *vec.begin();
    std::sort(vec.begin(), vec.end());
    low = *vec.begin();
    return (high - low);
}

// [**** Getters ****]
unsigned int Span::getSize() const
{
    return this->_size;
}

unsigned int Span::getPosition() const
{
    return this->_position;
}

// [**** Excaptions ****]
const char *Span::VectorInvalidException::what() const throw()
{
    return ("Error: Vector is invalid or broken.");
}

const char *Span::ArrayFullException::what() const throw()
{
    return ("Error: Array is already full.");
}

const char *Span::ComparisonInvalidException::what() const throw()
{
    return ("Error: Vector contains only 1 element. More needed for comparison.");
}

// [**** Destructor ****]
Span::~Span()
{
    std::cout << "Span destroyed." << std::endl;
}