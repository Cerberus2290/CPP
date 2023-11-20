/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 06:40:05 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/20 16:46:14 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "AForm.hpp"
# include <iostream>
# include <exception>

class   Form;

class   Bureaucrat
{
    private:
        std::string const   _name;
        int                 _grade;

    public:
        // Constructor
        Bureaucrat();
        Bureaucrat(std::string, int);   // Fields Constructor
        Bureaucrat(const Bureaucrat&);  // Copy Constructor
        
        // Overload Assignment Operator
        Bureaucrat& operator=(const Bureaucrat &);
        
        // Member Function
        void incerementGrade();
        void decrementGrade();
        void signForm(AForm&);
        void executeForm(AForm const &) const;

        // Getter & Setter Functions
        std::string const getName() const;
        int               getGrade() const;
        void              setName(std::string);
        void              setGrade(int);

        // Exception Classes
        class ExceptionGradeTooHigh: public std::exception
        {
            const char* what() const throw();
        };
        class ExceptionGradeTooLow: public std::exception
        {
            const char* what() const throw();
        };
        
        // Destructor
        virtual ~Bureaucrat();
};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);

#endif