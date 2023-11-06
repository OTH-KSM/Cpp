#ifndef FATHER_HPP
#define FATHER_HPP

#include <iostream>
#include <string>
#include "Person.hpp"

class Father : public Person{
	private :
		bool married;
		int salary;
	public :
		Father(std::string new_name, std::string new_color, int new_age, float new_height ,bool stat );
		~Father();
		void	HowItsaves( void );
		int SavedMoney( bool married );
};


#endif