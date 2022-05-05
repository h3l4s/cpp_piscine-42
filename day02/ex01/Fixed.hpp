#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <tgmath.h>

class Fixed{
	public:

		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(const int val);
		Fixed(const float fVal);
		~Fixed(void);

		Fixed & operator=(Fixed const & src);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void)const;
		float toFloat(void)const;
	private:

		int _a;
		static const int _fract = 8;
};

std::ostream & operator<<(std::ostream &o, Fixed const & src);
#endif //FIXED_H