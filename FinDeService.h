#ifndef FINDESERVICE_HPP
# define FINDESERVICE_HPP
# include <string>
# include <iostream>
# include "Evenement.h"

class	FinDeService: virtual public Evenement
{
		private:

		public:
			FinDeService(double heure);
			~FinDeService(void);
			void	traiter(void);
};
#endif
