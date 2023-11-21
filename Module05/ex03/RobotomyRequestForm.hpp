/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:26:18 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/21 14:33:07 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <exception>
#include <fstream>

# define checkStatus(X) ((X) == (true) ? ("Signed") : ("Unsigned"))

class   RobotomyRequestForm : public AForm
{
    private:
        std::string _target;
        RobotomyRequestForm();

    public:
        // Constructor
        RobotomyRequestForm(std::string);
        RobotomyRequestForm(const RobotomyRequestForm&);
        
        // Overload Assignment Operator
        RobotomyRequestForm& operator=(const RobotomyRequestForm&);
        
        // Member Function
        void gettingExecuted(Bureaucrat const &) const;

        // Destructor
        virtual ~RobotomyRequestForm();
};

std::ostream &operator<<(std::ostream&, const RobotomyRequestForm&);

#endif