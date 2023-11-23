/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:00:33 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/23 14:18:32 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Base.hpp"
#include "../A.hpp"
#include "../B.hpp"
#include "../C.hpp"

#include <cstdlib>
#include <cstdio>

static Base *generator()
{
    switch (rand() % 3)
    {
        case 0:
            return (new A());
            break ;
        case 1:
            return (new B());
            break ;
        case 2:
            return (new C());
            break ;
        default:
            perror("Error generator: could not randomly generate a number");
            return NULL;
    }
}

static void identify(Base *Ident)
{
    if (dynamic_cast<A *>(Ident))
        std::cout << "Identified type as: A" << std::endl;
    else if (dynamic_cast<B *>(Ident))
        std::cout << "Identified type as: B" << std::endl;
    else if (dynamic_cast<C *>(Ident))
        std::cout << "Identified type as: C" << std::endl;
    else
        std::cout << "Identified type as: Unknown" << std::endl;
}

static int i = 0;
static std::string classes[] = {"A", "B", "C"};

static void identify(Base &Ident)
{
    while (i < 3)
    {
        void *init = NULL;
        Base &what = (Base &)init;
        try
        {
            if (i == 0)
                what = dynamic_cast<A &>(Ident);
            else if (i == 1)
                what = dynamic_cast<B &>(Ident);
            else if (i == 2)
                what = dynamic_cast<C &>(Ident);
            else
                std::cout << "Error identify: unkown type" << std::endl;
            (void) what;
        }
        catch (std::exception &except)
        {
            i++;
            identify(Ident);
            return ;
        }
        std::cout << classes[i] << ": this is the identified type." << std::endl;
        i = 0;
        break ;
    }
}

int main()
{
    srand(time(NULL));
    for (int j = 0; j < 5; j++)
    {
        Base *Ident = generator();
        if (Ident == NULL)
            return 1;
        else
        {
            identify(Ident);
            identify(*Ident);
            delete (Ident);
            std::cout << std::endl;
        }
    }
    return 0;
}