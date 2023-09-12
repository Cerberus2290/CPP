/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:48:01 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/12 00:49:40 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl
{
    public:
        void    complain( std::string level );
    
    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
};

#endif