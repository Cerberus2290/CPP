/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:31:53 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/09 14:51:26 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

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
    
    private:
        // Attributes
            Brain   *_brain;
};

#endif