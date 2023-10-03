/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:50:41 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/03 11:56:23 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class   ClapTrap
{
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string);
        ClapTrap(const ClapTrap &);
        ClapTrap & operator=(const ClapTrap &);

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

        void    setAttackDamage(unsigned int);

        std::string getName() const;
        unsigned int    getAttackValue() const;
    
    private:
        std::string _name;
        int _hitPoint;
        int _energyPoint;
        int _attackDamage;
};

#endif