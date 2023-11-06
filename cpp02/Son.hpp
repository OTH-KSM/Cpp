#ifndef SON_HPP
#define SON_HPP

#include <iostream>
#include <string>
#include "Person.hpp"

class Son : public Person{
	private :
		int AcademiClass;
		int allowance;
	public :
		Son( std::string new_name, std::string new_color, int new_age, float new_height ,int classL );
		~Son();
		void	HowItsaves();
		int SavedMoney( int AcademiClass );
};


#endif