#ifndef SED_HPP
# define SED_HPP
# include "Evenement.h"
# include "Arrivee.h"
# include <string>
# include <vector>
# include <iostream>
# include <ctime>

class	Sed
{
		private:
			std::vector<Evenement*>	_events;
			double	_heure;

		public:
			Sed(void);
			Sed(double);
			~Sed(void);
			void	lancer(void);
			void	ajouter(Evenement &);
			double	getHeure(void) const;
};
#endif
