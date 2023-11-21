/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:48:11 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/21 14:53:57 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

// [**** Constructors ****]
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 24, 4), _target(target)
{
    std::cout << "PresidentialPardonForm created. --> Field Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm("PresidentialPardonForm", 24, 4)
{
    *this = copy;
    std::cout << "PresidentialPardonForm created. --> Copy Constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
    const_cast<std::string&>(_target) = rhs._target;
    std::cout << "PresidentialPardonForm created. --> Overload Assignment Operator" << std::endl;
    return *this;
}

std::ostream &operator<<(std::ostream& lhs, PresidentialPardonForm const &rhs)
{
    lhs << rhs.getName() << " , Status: " << checkStatus(rhs.getStatus()) << " , Grade to sign: " << rhs.getGradeToSign() << " , Grade to execute: " << rhs.getGradeToExecute() << std::endl;
    return lhs;
}
// [**** Member Functions ****]
void PresidentialPardonForm::gettingExecuted(Bureaucrat const &exec) const
{
    if (this->getStatus())
    {
        if (exec.getGrade() <= this->getGradeToExecute())
            std::cout << _target << " has been pardoned." << std::endl;
        else
            throw AForm::GradeTooLowException();
    }
    else
        throw AForm::FormNotSignedException();
}

// [**** Destructor ****]
PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destroyed." << std::endl;
}