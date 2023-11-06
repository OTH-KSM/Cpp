#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <string>


class Fixed {
	private :
		int n;
	public :
		Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator= (const Fixed& Fixed);
		~Fixed();
}

#endif