/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:31:42 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/23 13:37:52 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Serializer.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " [value of data]" << std::endl;
        return 1;
    }
    Serializer serializer;
    Data inputData;
    std::cout << "Original Data Address: " << &inputData << std::endl;
    
    uintptr_t serializedData = serializer.serialize(&inputData);
    std::cout << "Serialized Data: " << serializedData << std::endl;
    
    Data* deserializedData = serializer.deserialize(serializedData);
    std::cout << "Deserialized Data Address: " << deserializedData << std::endl;

    return 0;
}