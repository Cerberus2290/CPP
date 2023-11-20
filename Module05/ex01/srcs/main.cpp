/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:46:48 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/20 13:00:24 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Bureaucrat.hpp"
#include "../Form.hpp"

void Init_Form(std::string name, int sign_grade, int exec_grade)
{
    try
    {
        Form form = Form(name, sign_grade, exec_grade);
        std::cout << form << std::endl;
    }
    catch(std::exception& except)
    {
        std::cerr << except.what() << std::endl;
    }
}

int main ()
{
    Init_Form("Form1", 1, 150);
    Init_Form("Form2", 1, 151);
    Init_Form("Form3", -1, 150);
    Init_Form("Form4", -2, 158);

    Bureaucrat bureaucrat = Bureaucrat("Front Desk Clerk", 100);
    Bureaucrat bureaucrat2 = Bureaucrat("Front Office Manager", 1);
    Form form = Form("low", 145, 120);
    Form form1 = Form("middle", 99, 80);
    Form form2 = Form("high", 3, 2);

    std::cout << std::endl << "Front Desk Clerk" << std::endl;
    bureaucrat.signForm(form);
    bureaucrat.signForm(form1);
    bureaucrat.signForm(form2);
    std::cout << std::endl << "Front Office Manager" << std::endl;
    bureaucrat2.signForm(form);
    bureaucrat2.signForm(form1);
    bureaucrat2.signForm(form2);

    return 0;
}