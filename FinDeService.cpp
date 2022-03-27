#include "FinDeService.h"

FinDeService::FinDeService(double heure):Evenement(heure)
{
	std::cout << "FinDeService default constructor called" << std::endl;
}

FinDeService::~FinDeService(void)
{
	std::cout << "FinDeService destructor called" << std::endl;
}

#include <stdio.h>

void	FinDeService::traiter(void)
{
	std::cout << "FinDeService traitée" << std::endl;
	printf("heure : %.f\n", this->Evenement::getHeure());
}
