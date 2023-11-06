#include "Person.hpp"

Person::Person(std::string new_name, std::string new_color, int new_age, float new_height) {
	std::cout << "Animal : Constructor Called !" << std::endl;
	this->name = new_name;
	this->color = new_color;
	this->age = new_age;
	this->height = new_height;
}

Person::~Person() {
	std::cout << "Animal : Destroctor Called ~!" << std::endl;
}

void	Person::SelfIntroduce( void ) {
	std::cout << "Hi My name is " << this->name << " Am a " << this->color
	<< " And I'm " << this->age << " with a height of " << this->height << std::endl;
}

void	Person::HowItsaves( void ) {
	std::cout << "I don't know how to save money" << std::endl;
}