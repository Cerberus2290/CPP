/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:18:32 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/10 13:31:03 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Ice.hpp"
#include "../incl/Cure.hpp"
#include "../incl/Character.hpp"
#include "../incl/MateriaSource.hpp"
#include "../incl/IMateriaSource.hpp"

int main( void )
{
    IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}

/* int	main()
{
	Character	joe("Joe");
	Character	marvin("Marvin");
	AMateria	*snowspell = new Ice;
	AMateria	*curespell = new Cure;

	joe.equip(snowspell);
	joe.use(0, marvin);
	joe.use(1, marvin);
	joe.equip(curespell);
	joe.use(1, marvin);
	marvin.use(0, joe);
	marvin.unequip(0);
	joe.use(0, marvin);
	joe.use(1, marvin);
	joe.unequip(0);
	joe.unequip(1);
	joe = marvin;
	for (size_t i(0); i < INVENTORY_SIZE; ++i)
	{
		joe.unequip(i);
		marvin.unequip(i);
	}
	delete snowspell;
	delete curespell;
	return (EXIT_SUCCESS);
} */