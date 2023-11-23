/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:16:13 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/23 13:20:02 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <stdint.h>

typedef struct Data
{
    std::string str1;
    size_t      num;
    Data        *ptr;
} Data;

class   Serializer
{
    private:
    
    public:
        // Constructor
        Serializer();
        Serializer(const Serializer&);
        
        // Overload Assignment Operator
        Serializer& operator=(const Serializer&);

        // Member Function
        uintptr_t serialize(Data *ptr);
        Data      *deserialize(uintptr_t raw);
        
        // Destructor
        ~Serializer();
};

#endif