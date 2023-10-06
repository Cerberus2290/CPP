/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:21:14 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/05 11:45:39 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class   FragTrap : virtual public ClapTrap
{
    public:
        // Constructors
            FragTrap();
            FragTrap(std::string name);
            FragTrap(const FragTrap &fragtrap);
        // Overload Assignment Operator
            FragTrap& operator=(const FragTrap &fragtrap);
        // Member functions
            void    highFivesGuys();
        // Destructor
            virtual ~FragTrap();
};

#endif