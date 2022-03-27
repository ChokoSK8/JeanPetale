# include "Evenement.h"
# include "Sed.h"

int	main()
{
	Evenement	one(4);
	Evenement	two(8);
	Evenement	three(2);

	Sed			sedi(0);

	sedi.ajouter(one);
	sedi.ajouter(two);
	sedi.ajouter(three);

	sedi.lancer();

	return (0);
}
