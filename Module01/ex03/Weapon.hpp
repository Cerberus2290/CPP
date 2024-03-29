/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:08:47 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/08 08:03:41 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class   Weapon
{
    public:
        Weapon();
        Weapon(std::string);
        ~Weapon();
        std::string getType();
        void    setType(std::string);
    
    private:
        std::string _type;
};

#endif