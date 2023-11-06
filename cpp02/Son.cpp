#include "Son.hpp"

Son::Son( std::string new_name, std::string new_color, int new_age, float new_height ,int classL ) : Person(new_name, new_color, new_age, new_height){
	std::cout << "Son : Constructor Called !" << std::endl;
	
	this->AcademiClass = classL;
	this->allowance = 500;
}

Son::~Son() {
	std::cout << "Son : Dectroctor Called ~!" << std::endl;
}

void	Son::HowItsaves() {
	std::cout << "Son Saved : " << SavedMoney(this->AcademiClass) << std::endl;
}

int Son::SavedMoney( int AcademiClass ) {
	switch (AcademiClass) {
		case (1) :
			return (this->allowance - 10);
		case (2) :
			return (this->allowance - 20);
		case (3) :
			return (this->allowance - 30);
		case (4) :
			return (this->allowance - 40);
		case (5) :
			return (this->allowance - 50);
		case (6) :
			return (this->allowance - 60);
	}
	return (AcademiClass);
}