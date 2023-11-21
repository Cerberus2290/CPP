/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:23:46 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/20 16:46:30 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ShrubberyCreationForm.hpp"

// [**** Constructors ****]
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default")
{
    std::cout << "ShrubberyCreationForm created. --> Default Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm created. --> Field Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm("ShrubberyCreationForm", 145, 137)
{
    *this = copy;
    std::cout << "ShrubberyCreationForm created. --> Copy Constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
    const_cast<std::string&>(_target) = rhs._target;
    std::cout << "ShrubberyCreationForm created. --> Overload Assignment Operator" << std::endl;
    return *this;
}

std::ostream &operator<<(std::ostream& lhs, ShrubberyCreationForm const &rhs)
{
    lhs << rhs.getName() << " , Status: " << checkStatus(rhs.getStatus()) << " , Sign Grade: " << rhs.getGradeToSign() << " , Execute Grade: " << rhs.getGradeToExecute() << std::endl;
    return lhs;
}

// [**** Member Functions ****]
void ShrubberyCreationForm::gettingExecuted(Bureaucrat const &exec) const
{
    if (this->getStatus())
    {
        if(exec.getGrade() <= this->getGradeToExecute())
        {
            std::ofstream output_file((_target + "_shrubbery").c_str());
            if (!output_file)
            {
                std::cerr << "Error: Can't open output file " << std::endl;
                return ;
            }
            output_file << "       _-_" << std::endl;
            output_file << "    /~~   ~~\\" << std::endl;
            output_file << " /~~         ~~\\" << std::endl;
            output_file << "{               }" << std::endl;
            output_file << " \\  _-     -_  /" << std::endl;
            output_file << "   ~  \\\\ //  ~" << std::endl;
            output_file << "_- -   | | _- _" << std::endl;
            output_file << "  _ -  | |   -_" << std::endl;
            output_file << "      // \\\\" << std::endl;
            output_file << std::endl;
        }
        else
            throw AForm::GradeTooLowException();
    }
    else
        throw AForm::FormNotSignedException();
}

// [**** Destructor ****]
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destroyed." << std::endl;
}