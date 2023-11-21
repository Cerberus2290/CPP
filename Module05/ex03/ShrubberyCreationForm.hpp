#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <exception>
#include <fstream>

# define checkStatus(X) ((X) == (true) ? ("Signed") : ("Unsigned"))

class   ShrubberyCreationForm : public AForm
{
    private:
        std::string const   _target;
        ShrubberyCreationForm();

    public:
        // Constructor
        ShrubberyCreationForm(std::string);
        ShrubberyCreationForm(const ShrubberyCreationForm&);

        // Overload Assignment Operator
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);

        // Member Function
        void gettingExecuted(Bureaucrat const &) const;
        
        // Destructor
        virtual ~ShrubberyCreationForm();
};

std::ostream& operator<<(std::ostream&, ShrubberyCreationForm const &);

#endif
