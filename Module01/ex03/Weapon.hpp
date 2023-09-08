/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:08:47 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/08 13:10:52 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WAEPON_HPP

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