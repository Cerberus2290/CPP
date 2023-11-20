/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:32:40 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/20 13:03:00 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Form.hpp"

// [**** Constructors ****]
Form::Form() : _name("Default Form"), _gradeToSign(150), _gradeToExecute(150), _status(false)
{
    std::cout << "Form created. --> Default Constructor" << std::endl;
}

Form::Form(const Form& form) : _name("Default Form"), _gradeToSign(150), _gradeToExecute(150), _status(false)
{
    *this = form;
    std::cout << "Form created. --> Copy Constructor" << std::endl;
}

Form::Form(std::string name, int sign_grade, int exec_grade) : _name(name), _gradeToSign(sign_grade), _gradeToExecute(exec_grade), _status(false)
{
    if (sign_grade > 150 || exec_grade > 150)
        throw GradeTooLowException();
    else if (sign_grade < 1 || exec_grade < 1)
        throw GradeTooHighException();
    std::cout << "Form created. --> Field Constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]
Form& Form::operator=(const Form& rhs)
{
    const_cast<int&>(_gradeToSign) = rhs.getGradeToSign();
    const_cast<int&>(_gradeToExecute) = rhs.getGradeToExecute();
    _status = rhs.getStatus();
    const_cast<std::string&>(_name) = rhs.getName();
    std::cout << "Form created. --> Overload Assignment Operator" << std::endl;
    return *this;
}

std::ostream& operator<<(std::ostream& lhs, Form const &rhs)
{
    lhs << rhs.getName() << " , Status: " << checkStatus(rhs.getStatus()) << " , Grade to sign: " << rhs.getGradeToSign() << " , Grade to execute: " << rhs.getGradeToExecute() << std::endl;
    return lhs;
}

// [**** Member Functions ****]
const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

void Form::gettingSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= _gradeToSign)
        _status = true;
    else
        throw GradeTooLowException();
}

// [**** Getter & Setter Functions ****]
std::string const Form::getName() const
{
    return _name;
}

int Form::getGradeToSign() const
{
    return _gradeToSign;
}

int Form::getGradeToExecute() const
{
    return _gradeToExecute;
}

bool Form::getStatus() const
{
    return _status;
}

// [**** Destructor ****]
Form::~Form()
{
    std::cout << "Form deleted." << std::endl;
}