/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 07:04:14 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/10 07:34:26 by tstrassb         ###   ########.fr       */
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
            std::string _name;
            AMateria    *_inventory[INVENTORY_SIZE];

    public:
        // Constructor
            Character();
            Character(const std::string &name);
            Character(const Character &character);
        // Overload Assignment Operator
            Character& operator=(const Character &character);
        // Getter Functions
            std::string const & getName() const;
        // Member Function
            void equip(AMateria* m);
            void unequip(int index);
            void use(int index, ICharacter& target);
        // Destructor
            ~Character();
};

#endif