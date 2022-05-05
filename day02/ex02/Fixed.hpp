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
		bool operator>(Fixed const & src)const;
		bool  operator<(Fixed const & src)const;
		bool  operator>=(Fixed const & src)const;
		bool  operator<=(Fixed const & src)const;
		bool  operator==(Fixed const & src)const;
		bool  operator!=(Fixed const & src)const;
		Fixed operator+(Fixed const & src);
		Fixed operator-(Fixed const & src);
		Fixed operator*(Fixed const & src);
		Fixed operator/(Fixed const & src);
		Fixed  &operator ++(void);
		Fixed  &operator --(void);
		Fixed  operator ++(int);
		Fixed  operator --(int);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void)const;
		float toFloat(void)const;
		static Fixed &min(Fixed &n1, Fixed &n2);
		static Fixed &max(Fixed &n1, Fixed &n2);
		static const Fixed &max(Fixed const &n1, Fixed const &n2);
		static const Fixed &min(Fixed const &n1, Fixed const &n2);
	private:

		int _a;
		static const int _fract = 8;
};

std::ostream & operator<<(std::ostream &o, Fixed const & src);
#endif //FIXED_H