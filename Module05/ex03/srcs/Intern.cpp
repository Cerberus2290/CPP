/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:12:22 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/21 16:35:24 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Intern.hpp"

// [**** Constructors ****]
Intern::Intern()
{
    std::cout << "Intern created. --> Default Constructor" << std::endl;
}

Intern::Intern(const Intern& copy)
{
    *this = copy;
    std::cout << "Intern created. --> Copy Constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]
Intern& Intern::operator=(const Intern& rhs)
{
    (void)rhs;
    std::cout << "Intern created. --> Assignment Operator" << std::endl;
    return *this;
}

// [**** Member Functions ****]
const char* Intern::FormNotFoundException::what() const throw()
{
    return "Form not found.";
}

AForm* Intern::makeShrubbery(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::makeRobotomy(std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm* Intern::makePresidential(std::string target)
{
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string name, std::string target)
{
    std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    formPtr formPtrs[3] = {&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePresidential};
    try
    {
        for (int i = 0; i < 3; i++)
        {
            if (formNames[i] == name)
                return ((this->*formPtrs[i])(target));
        }
        throw FormNotFoundException();
    }
    catch (const std::exception& except)
    {
        std::cerr << except.what() << std::endl;
        return NULL;
    }
}

// [**** Destructor ****]
Intern::~Intern()
{
    std::cout << "Intern destroyed." << std::endl;
}