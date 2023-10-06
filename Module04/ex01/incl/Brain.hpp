/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:29:18 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/06 13:35:43 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

#define BRAIN_SIZE  100

class   Brain
{
    public:
        // Constructor
            Brain();
            Brain(const Brain &brain);
        // Overload Assignment Operator
            Brain& operator=(const Brain &brain);
        // Destructor
            ~Brain();

    private:
        // Attributes
            std::string _ideas[BRAIN_SIZE];
};

#endif
