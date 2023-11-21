/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:54:15 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/21 15:01:28 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../AForm.hpp"
#include "../Bureaucrat.hpp"
#include "../ShrubberyCreationForm.hpp"
#include "../RobotomyRequestForm.hpp"
#include "../PresidentialPardonForm.hpp"

int main()
{
    ShrubberyCreationForm shrub("Sh1");
    RobotomyRequestForm robot("Ro2 ");
    PresidentialPardonForm presi("Pr3");
    Bureaucrat bur1("Bur", 1);
    Bureaucrat bur2("Bur2", 146);
    Bureaucrat bur3("Bur3", 6);
    Bureaucrat bur4("Bur4", 25);

    bur1.signForm(robot);
    bur1.executeForm(robot);
    bur1.signForm(presi);
    bur3.executeForm(presi);
}