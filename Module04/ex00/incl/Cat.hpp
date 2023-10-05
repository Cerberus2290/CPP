/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:31:53 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/05 15:35:16 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class   Cat : public    Animal
{
    public:
        // Constructor
            Cat();
            Cat(const Cat &cat);
        // Overload Assignment Operator
            Cat& operator=(const Cat &cat);
        // Member Function
            void    makeSound() const;
        // Destructor
            ~Cat();
};

#endif