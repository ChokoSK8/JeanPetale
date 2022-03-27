#ifndef ARRIVEE_HPP
# define ARRIVEE_HPP
# include <string>
# include <iostream>
# include "Evenement.h"

class	Arrivee: virtual public Evenement
{
		private:

		public:
			Arrivee(double heure);
			~Arrivee(void);
			void	traiter(void);
};
#endif
