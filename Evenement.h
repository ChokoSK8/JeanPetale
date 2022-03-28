#ifndef EVENEMENT_HPP
# define EVENEMENT_HPP
# include <string>
# include <iostream>
# include <iostream>
# include <stdio.h>
# include <ctime>

class	Evenement
{
		private:
			double	_heure;

		public:
			Evenement(double);
			virtual ~Evenement(void);
			double	getHeure(void) const;
			virtual void	traiter(void) = 0;
};
#endif
