/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceFiles.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 08:45:48 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/08 08:48:25 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACEFILES_HPP
# define REPLACEFILES_HPP

#include <string>
#include <fstream>

class   ReplaceFiles
{
    public:
        ReplaceFiles(char *);
        ~ReplaceFiles();
        std::string getText();
        void    replace(char *, char *);
    
    private:
        std::string _text;
        std::string _filename;
};

#endif