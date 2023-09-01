/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:15:43 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/01 08:15:44 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		int j = 0;
		while (argv[++j])
		{
			int i = 0;
			while (argv[j][i])
				std::cout << char(toupper(argv[j][i++]));
		}
	}
	std::cout << std::endl;
	return 0;
}