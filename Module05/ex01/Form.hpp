/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:14:06 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/20 11:45:49 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

# define checkStatus(X) ((X) == (true) ? ("Signed") : ("Unsigned"))

class   Bureaucrat;

class   Form
{
    private:
        std::string const   _name;
        int const           _gradeToSign;
        int const           _gradeToExecute;
        bool                _status;

    public:
        // Constructor
        Form();
        Form(std::string, int, int);    //Field Constructor
        Form(const Form&);  //Copy Constructor
        
        // Overload Assignment Operator
        Form& operator=(const Form&);
        
        // Member Function
        void gettingSigned(Bureaucrat&);

        // Getter & Setter Functions
        std::string const getName() const;
        int               getGradeToSign() const;
        int               getGradeToExecute() const;
        bool              getStatus() const;
        
        // Destructor
        virtual ~Form();

        // Exception Classes
        class GradeTooHighException: public std::exception
        {
            const char* what() const throw();
        };

        class GradeTooLowException: public std::exception
        {
            const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream&, const Form&);

#endif