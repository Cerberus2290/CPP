/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:29:18 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 12:58:11 by tstrassb         ###   ########.fr       */
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
            Brain(std::string ideas);
        // Overload Assignment Operator
            Brain& operator=(const Brain &brain);
        // Member Functions
            std::string getIdea(int index) const;
            void        setIdea(int index, std::string idea);
        // Destructor
            ~Brain();

    private:
        // Attributes
            std::string _ideas[BRAIN_SIZE];
};

#endif
