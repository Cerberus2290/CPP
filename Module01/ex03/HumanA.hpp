/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:14:06 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/08 07:52:57 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class   HumanA
{
    public:
        HumanA(std::string, Weapon&);
        void    attack();

    private:
        std::string _name;
        Weapon  &_weapon;
};

#endif