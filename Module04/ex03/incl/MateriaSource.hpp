/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:08:02 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/10 10:12:20 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class   MateriaSource : public IMateriaSource
{
    private:
        // Attributes
            AMateria    *_slots[INVENTORY_SIZE];

    public:
        // Constructor
            MateriaSource();
            MateriaSource(const MateriaSource &matsource);
        // Overload Assignment Operator
            MateriaSource& operator=(const MateriaSource &matsource);
        // Member Function
            void    learnMateria(AMateria*);
            AMateria*   createMateria(std::string const & type);
        // Destructor
            ~MateriaSource();
};

#endif