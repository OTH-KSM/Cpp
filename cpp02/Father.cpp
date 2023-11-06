#include "Father.hpp"

Father::Father(std::string new_name, std::string new_color, int new_age, float new_height ,bool stat ) : Person(new_name, new_color, new_age, new_height){
	std::cout << "Father : Constructor Called !" << std::endl;
	
	this->married = stat;
	this->salary = 10000;
}

Father::~Father() {
	std::cout << "Father : Dectroctor Called ~!" << std::endl;
}

void	Father::HowItsaves( void ) {
	std::cout << "Son Saved : " << SavedMoney(this->salary) << std::endl;
}

int	Father::SavedMoney( bool Married ) {
	switch (Married) {
		case (1):
			return (this->salary - 1000);
		case (0):
			return (this->salary - 12);
	}
}