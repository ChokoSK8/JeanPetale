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
			Evenement(void);
			Evenement(double);
			~Evenement(void);
			double	getHeure(void) const;
			void	traiter(void);
};
#endif
