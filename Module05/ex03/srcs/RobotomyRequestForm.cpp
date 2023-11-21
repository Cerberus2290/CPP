/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:31:55 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/21 14:43:27 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

// [**** Constructors ****]
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 71, 44), _target(target)
{
    std::cout << "RobotomyRequestForm created. --> Field Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm("RobotomyRequestForm", 71, 44)
{
    *this = copy;
    std::cout << "RobotomyRequestForm created. --> Copy Constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
    const_cast<std::string&>(_target) = rhs._target;
    std::cout << "RobotomyRequestForm created. --> Overload Assignment Operator" << std::endl;
    return *this;
}

std::ostream &operator<<(std::ostream& lhs, RobotomyRequestForm const &rhs)
{
    lhs << rhs.getName() << " , Status: " << checkStatus(rhs.getStatus()) << " , Grade to sign: " << rhs.getGradeToSign() << " , Grade to execute: " << rhs.getGradeToExecute() << std::endl;
    return lhs;
}

// [**** Member Functions ****]
void RobotomyRequestForm::gettingExecuted(Bureaucrat const &exec) const
{
    if (this->getStatus())
    {
        if (exec.getGrade() <= this->getGradeToExecute())
        {
            std::cout << "YOU WILL BE UPGRADED!!" << std::endl;
            std::srand(time(0));
            if ((std::rand() % 100) < 50)
                std::cout << _target << "YOU HAVE BEEN UPGRADED!!" << std::endl;
            else
                std::cout << _target << "YOUR UPGRADE FAILED!!" << std::endl;
        }
        else
            throw AForm::GradeTooLowException();
    }
    else
        throw AForm::FormNotSignedException();
}

// [**** Destructor ****]
RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destroyed." << std::endl;
}