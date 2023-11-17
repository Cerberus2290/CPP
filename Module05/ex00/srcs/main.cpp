/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 06:58:44 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/17 07:10:50 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Bureaucrat.hpp"

int main()
{
    Bureaucrat one("One", 1);
    std::cout << one << std::endl;
    Bureaucrat two(one);
    std::cout << two << std::endl;
    Bureaucrat three;
    std::cout << three << std::endl;

    try
    {
        //Bureaucrat buro("Marc", 0);
        Bureaucrat buro("Marc", 150);
        //Bureaucrat buro("Marc", 151);
        std::cout << buro.getGrade() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat buro2("Phillip", 1);
        buro2.incerementGrade();
        std::cout << buro2.getGrade() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat buro3("Tina", 150);
        buro3.decrementGrade();
        std::cout << buro3.getGrade() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}