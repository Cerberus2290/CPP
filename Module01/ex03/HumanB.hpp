/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 07:38:02 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/08 07:40:15 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class   HumanB
{
    public:
        HumanB(std::string);
        ~HumanB() {};
        void    attack();
        void    setWeapon(Weapon&);
    
    private:
        Weapon  *_weapon;
        std::string _name;
};

#endif