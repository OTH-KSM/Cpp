#ifndef MAIN_HPP
#define MAIN_HPP


#include <iostream>
#include <string>


class Student {
	private :
		std::string name;
		std::string age;
		std::string courses;
	public :
		Student();
		~Student();
		void	init(std::string name, std::string age, std::string courses);
		void	introduce(  void );
};

#endif