#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <cstdlib>
#include <string>
#include <iostream>

class   Animal
{
    public:
        // Constructor
            Animal();
            Animal(const Animal &animal);
        // Overload Assignment Operator
            Animal& operator=(const Animal &animal);
        // Member Function
            virtual void    makeSound() const = 0;
        // Getter Function
            std::string getType() const;
        // Destructor
            virtual ~Animal();
    
    protected:
        // Attribute
            std::string _type;
};

#endif