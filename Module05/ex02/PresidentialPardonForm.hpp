/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:44:33 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/21 14:47:26 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <exception>
#include <fstream>

# define checkStatus(X) ((X) == (true) ? ("Signed") : ("Unsigned"))

class   PresidentialPardonForm : public AForm
{
    private:
        std::string _target;
        PresidentialPardonForm();

    public:
        // Constructor
        PresidentialPardonForm(std::string);
        PresidentialPardonForm(const PresidentialPardonForm&);
        
        // Overload Assignment Operator
        PresidentialPardonForm& operator=(const PresidentialPardonForm&);
        
        // Member Function
        void gettingExecuted(Bureaucrat const &) const;

        // Destructor
        virtual ~PresidentialPardonForm();
};

std::ostream &operator<<(std::ostream&, const PresidentialPardonForm&);

#endif