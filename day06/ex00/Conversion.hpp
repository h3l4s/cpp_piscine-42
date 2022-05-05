#ifndef CONVERSION_H
# define CONVERSION_H

# include <iostream>
# include <string>
# include <limits>
# include <cmath>
# include <stdlib.h>

class Conversion{
		public:

			Conversion(void);
			Conversion(const Conversion & src);
			virtual ~Conversion(void);
			Conversion &operator=(const Conversion & src);

			float makeTreatable(std::string const & treat);
			int toInt(float);
			char toChar(float);
			double toDouble(float);
			float toFloat(float);
			class invalidFloat: public std::exception{
				public:

					virtual const char *what() const throw(){
						return ("impossible");
					}
			};
			class invalidChar: public std::exception{
				public:

					virtual const char *what() const throw(){
						return ("Non displayable");
					}
			};
			class cannotConvert: public std::exception{
				public:

					virtual const char *what() const throw(){
						return ("error: invalid input, please enter a (char/int/float/double)");
					}
			};
};

#endif //CONVERSION_H//