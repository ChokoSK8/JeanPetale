# include "Evenement.h"
# include "Sed.h"
# include "Arrivee.h"

int	main()
{
	Arrivee	one (4);
	Arrivee	two (8);
	FinDeService	three(2);

	Sed			sedi(0);

	sedi.ajouter(one);
	sedi.ajouter(two);
	sedi.ajouter(three);

	sedi.lancer();

	return (0);
}
