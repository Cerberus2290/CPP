/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:14:06 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/20 13:45:37 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

# define checkStatus(X) ((X) == (true) ? ("Signed") : ("Unsigned"))

class   Bureaucrat;

class   AForm
{
    private:
        std::string const   _name;
        int const           _gradeToSign;
        int const           _gradeToExecute;
        bool                _status;

    public:
        // Constructor
        AForm();
        AForm(std::string, int, int);    //Field Constructor
        AForm(const AForm&);  //Copy Constructor
        
        // Overload Assignment Operator
        AForm& operator=(const AForm&);
        
        // Member Function
        void         gettingSigned(Bureaucrat&);
        virtual void gettingExecuted(Bureaucrat const &) const = 0;

        // Getter & Setter Functions
        std::string const getName() const;
        int               getGradeToSign() const;
        int               getGradeToExecute() const;
        bool              getStatus() const;
        
        // Destructor
        virtual ~AForm();

        // Exception Classes
        class GradeTooHighException: public std::exception
        {
            const char* what() const throw();
        };

        class GradeTooLowException: public std::exception
        {
            const char* what() const throw();
        };

        class FormNotSignedException: public std::exception
        {
            const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream&, const AForm&);

#endif