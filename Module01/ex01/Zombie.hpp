/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:50:48 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/07 14:55:24 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class   Zombie
{
    public:
        Zombie( std::string name );
        Zombie();
        ~Zombie();
        void    setZombieName( std::string name );
        void    announce( void );

    private:
        std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif