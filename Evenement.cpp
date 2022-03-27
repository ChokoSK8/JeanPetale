#include "Evenement.h"

Evenement::Evenement(void)
{
	std::cout << "Evenement default constructor called" << std::endl;
}

Evenement::Evenement(double heure)
{
	std::cout << "Evenement setParam constructor called" << std::endl;
	_heure = heure;
}

Evenement::~Evenement(void)
{
	std::cout << "Evenement destructor called" << std::endl;
}

double	Evenement::getHeure(void) const
{
	return _heure;
}
