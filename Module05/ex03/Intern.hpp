/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:46:03 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/21 16:10:33 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <exception>

class AForm;

class Intern
{
    public:
        // Constructor
        Intern();
        Intern(const Intern&);
        
        // Overload Assignment Operator
        Intern& operator=(const Intern&);
        
        // Member Function
        AForm* makeForm(std::string, std::string);
        AForm* makeShrubbery(std::string);
        AForm* makeRobotomy(std::string);
        AForm* makePresidential(std::string);

        // Exception
        class FormNotFoundException : public std::exception
        {
            const char* what() const throw();
        };

        typedef AForm* (Intern::*formPtr)(std::string);

        // Destructor
        virtual ~Intern();
};

#endif
