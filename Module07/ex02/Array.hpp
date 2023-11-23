/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:30:10 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/23 16:47:39 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template< typename T >

class   Array
{
    private:
        T            *_array;
        unsigned int _size;

    public:
        // Constructor
        Array() : _size(0)
        {
            std::cout << "Default Constructor: Empty array of size 0 was created." << std::endl;
            this->_array = new T[this->_size];
        }
        
        Array(unsigned int size) : _size(size)
        {
            std::cout << "Constructor: Created an array of size: " << size << std::endl;
            this->_array = new T[this->_size];
        }

        Array(const Array &copy) : _size(copy.size())
        {
            std::cout << "Copy constructor." << std::endl;
            this->_array = NULL;
            *this = copy;
        }
        
        // Overload Assignment Operator
        Array& operator=(const Array &rhs)
        {
            if (this->_array != NULL)
                delete [] this->_array;
            if (rhs.size() != 0)
            {
                this->_size = rhs.size();
                this->_array = new T[this->_size];
                for (unsigned int i = 0; i < this->size(); i++)
                    this->_array[i] = rhs._array[i];
            }
            return *this;
        }
        
        T &operator[](unsigned int index)
        {
            if (index >= this->_size || this->_array == NULL)
            {
                std::cout << "Index: " << index << std::endl;
                throw Array<T>::IndexException();
            }
            return (this->_array[index]);
        }

        // Excaption Class
        class IndexException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        
        // Member Function

        // Getters
        unsigned int size() const
        {
            return (this->_size);
        }
        
        // Destructor
        ~Array()
        {
            if (this->_array != NULL)
                delete [] this->_array;
        }
};

template< typename T >
const char *Array<T>::IndexException::what() const throw()
{
    return ("Error: Invalid index");
}

#endif