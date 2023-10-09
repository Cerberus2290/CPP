/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:11:19 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/09 14:54:21 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class   WrongCat : public   WrongAnimal
{
    public:
        // Constructor
            WrongCat();
            WrongCat(const WrongCat &wrongcat);
        // Overload Assignment Operator
            WrongCat& operator=(const WrongCat &wrongcat);
        // Destructor
            ~WrongCat();
};

#endif