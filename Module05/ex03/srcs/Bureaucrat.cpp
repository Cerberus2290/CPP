/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 06:49:04 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/20 16:50:55 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Bureaucrat.hpp"

// [**** Constructors ****]
Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
    std::cout << "Bureaucrat created. --> Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
    *this = copy;
    std::cout << "Bureaucrat created. --> Copy Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade > 150)
        throw Bureaucrat::ExceptionGradeTooLow();
    else if (grade < 1)
        throw Bureaucrat::ExceptionGradeTooHigh();
    else
        _grade = grade;
    std::cout << "Bureaucrat created. --> Fields Constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]
Bureaucrat &Bureaucrat::operator=(const Bureaucrat& rhs)
{
    _grade = rhs.getGrade();
    const_cast<std::string&>(_name) = rhs.getName();
    std::cout << "Bureaucrat created. --> Overload Assignment Operator" << std::endl;
    return *this;
}

// [**** Member Functions ****]
const char* Bureaucrat::ExceptionGradeTooHigh::what() const throw()
{
    return "Grade is too high!";
}

const char* Bureaucrat::ExceptionGradeTooLow::what() const throw()
{
    return "Grade is too low!";
}

void Bureaucrat::incerementGrade()
{
    if (_grade == 1)
        throw Bureaucrat::ExceptionGradeTooHigh();
    else
        _grade--;
}

void Bureaucrat::decrementGrade()
{
    if (_grade == 150)
        throw Bureaucrat::ExceptionGradeTooLow();
    else
        _grade++;
}

void Bureaucrat::signForm(AForm& form)
{
    try
    {
        form.gettingSigned(*this);
        std::cout << *this << " signed the form " << form << std::endl;
    }
    catch (AForm::GradeTooLowException &except)
    {
        std::cerr << *this << " cannot sign the form " << form << " because Bureaucrat does not have enough grade." << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const &form) const
{
    try
    {
        form.gettingExecuted(*this);
        std::cout << *this << " executed the form " << form.getName() << std::endl;
    }
    catch (AForm::GradeTooLowException &except)
    {
        std::cerr << *this << " cannot execute the form " << form << std::endl;
    }
    catch (AForm::FormNotSignedException &except)
    {
        std::cerr << "Form " << form.getName() << " is not signed yet." << std::endl;
        std::cerr << "Form Info: " << form << std::endl;
    }
}

// [**** Getter & Setter Functions ****]
std::string const Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

void Bureaucrat::setName(std::string name)
{
    name = _name;
}

// [**** Destructor ****]
Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destroyed. --> Deconstructor" << std::endl;
}

// [**** Overload << Operator ****]
std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return out;
}