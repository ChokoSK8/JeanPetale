#include "Arrivee.h"

Arrivee::Arrivee(double heure):Evenement(heure)
{
	std::cout << "Arrivee default constructor called" << std::endl;
}

Arrivee::~Arrivee(void)
{
	std::cout << "Arrivee destructor called" << std::endl;
}

#include <stdio.h>

void	Arrivee::traiter(void)
{
	std::cout << "Arrivee traitée" << std::endl;
	printf("heure : %.f\n", this->Evenement::getHeure());
}
