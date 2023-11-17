/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 07:04:14 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 16:50:45 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

#define INVENTORY_SIZE  4

class   Character : public ICharacter
{
    private:
        //Attributes
            AMateria    *_inventory[INVENTORY_SIZE];
            AMateria    *_ground[1000];
            int         count_ground;
            std::string _name;

    public:
        // Constructor
            Character();
            Character(std::string name);
            Character(const Character &character);
        // Overload Assignment Operator
            Character& operator=(const Character &character);
        // Getter Functions
            std::string const & getName() const;
            AMateria const *getInventory(int index) const;
            AMateria const *getGround(int index) const;
        // Member Function
            void equip(AMateria* m);
            void unequip(int index);
            void use(int index, ICharacter& target);
        // Destructor
            ~Character();
};

#endif