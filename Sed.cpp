#include "Sed.h"

Sed::Sed(void)
{
	std::cout << "Sed default constructor called" << std::endl;
}

Sed::Sed(double heure)
{
	std::cout << "Sed setParam constructor called" << std::endl;
	this->_heure = heure;
}

Sed::~Sed(void)
{
	std::cout << "Sed destructor called" << std::endl;
}

void	Sed::ajouter(Evenement e)
{
	if (!_events.size())
		_events.push_back(&e);
	else
	{
		std::vector<Evenement*>::iterator	i = _events.begin();
		while (i != _events.end())
		{
			if ((*i)->getHeure() < e.getHeure())
				break;
			i++;
		}
		_events.insert(i, &e);
	}
}

void	Sed::lancer(void)
{
	std::vector<Evenement*>::iterator	i;

	while (_events.size())
	{
		i = _events.end() - 1;
/*		time(&actual);
		diff = i->getHeure() - actual.tm_sec;
		if (diff > 1)
			sleep((unsigned int)(diff - 1));
		while (diff > 0)
			diff = i.getHeure() - actual.tm_sec;*/
		(*i)->traiter();
		_events.pop_back();
	//	delete i;
	}
}

double	Sed::getHeure(void) const
{
	return _heure;
}
