/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 06:35:05 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/06 06:37:37 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class   Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie();
        void    announce( void );
    
    private:
        std::string _name;
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif