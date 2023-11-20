/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:32:40 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/20 13:44:13 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../AForm.hpp"

// [**** Constructors ****]
AForm::AForm() : _name("Default Form"), _gradeToSign(150), _gradeToExecute(150), _status(false)
{
    std::cout << "Form created. --> Default Constructor" << std::endl;
}

AForm::AForm(const AForm& form) : _name("Default Form"), _gradeToSign(150), _gradeToExecute(150), _status(false)
{
    *this = form;
    std::cout << "Form created. --> Copy Constructor" << std::endl;
}

AForm::AForm(std::string name, int sign_grade, int exec_grade) : _name(name), _gradeToSign(sign_grade), _gradeToExecute(exec_grade), _status(false)
{
    if (sign_grade > 150 || exec_grade > 150)
        throw GradeTooLowException();
    else if (sign_grade < 1 || exec_grade < 1)
        throw GradeTooHighException();
    std::cout << "Form created. --> Field Constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]
AForm& AForm::operator=(const AForm& rhs)
{
    const_cast<int&>(_gradeToSign) = rhs.getGradeToSign();
    const_cast<int&>(_gradeToExecute) = rhs.getGradeToExecute();
    _status = rhs.getStatus();
    const_cast<std::string&>(_name) = rhs.getName();
    std::cout << "Form created. --> Overload Assignment Operator" << std::endl;
    return *this;
}

std::ostream& operator<<(std::ostream& lhs, AForm const &rhs)
{
    lhs << rhs.getName() << " , Status: " << checkStatus(rhs.getStatus()) << " , Grade to sign: " << rhs.getGradeToSign() << " , Grade to execute: " << rhs.getGradeToExecute() << std::endl;
    return lhs;
}

// [**** Member Functions ****]
const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

void AForm::gettingSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= _gradeToSign)
        _status = true;
    else
        throw GradeTooLowException();
}

// [**** Getter & Setter Functions ****]
std::string const AForm::getName() const
{
    return _name;
}

int AForm::getGradeToSign() const
{
    return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return _gradeToExecute;
}

bool AForm::getStatus() const
{
    return _status;
}

// [**** Destructor ****]
AForm::~AForm()
{
    std::cout << "Form deleted." << std::endl;
}