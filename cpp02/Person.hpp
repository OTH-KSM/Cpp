#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
#include <string>

class Person {
	public :
		std::string name;
		std::string color;
		int age;
		float height;
		Person(std::string new_name, std::string new_color, int new_age, float new_height);
		~Person();
		virtual void	HowItsaves( void );
		void	SelfIntroduce( void );
};


#endif