/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:11:19 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 10:15:33 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class   WrongCat : virtual public   WrongAnimal
{
    public:
        // Constructor
            WrongCat();
            WrongCat(const WrongCat &wrongcat);
        // Overload Assignment Operator
            WrongCat& operator=(const WrongCat &wrongcat);
        // Member Functions
            void    makeSound() const;
        // Destructor
        ~WrongCat();
};

#endif