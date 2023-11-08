/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:03:35 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 07:00:46 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap
{
    public:
        // Constructors
            FragTrap();
            FragTrap(std::string name);
            FragTrap(FragTrap const &fragtrap);
        // Overload Assignment Operator
            FragTrap& operator=(FragTrap const &fragtrap);
        // Member functions
            void    highFivesGuys();
        // Destructor
            ~FragTrap();
};

#endif