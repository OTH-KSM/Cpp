// ******************************************************************************************************** //
// #include "main.hpp"
// ******************************************************************************************************** //


// Student::Student()
// {
// 	std::cout << "Constructor called" << std::endl;
// }

// Student::~Student()
// {
// 	std::cout << "Destructor called" << std::endl;
// }

// void Student::init(std::string name, std::string age, std::string courses)	{
// 	this->name = name;
// 	this->age = age;
// 	this->courses = courses;
// }

// void	Student::introduce( void ) {
// 	std::cout << "My name is " << this->name << " I'm " << this->age << " years old and i'm learning now "
//  << this ->courses << std::endl;
//  }

// int main ( void )
// {
// 	Student student1;
// 	Student student2;

// 	student1.init("Othmane", "12", "C++");
// 	student2.init("Othmane", "12", "C++");

// 	student1.introduce();
// 	student2.introduce();

// 	std::cout << "Id1 is :" << &student1 << std::endl;
// 	std::cout << "Id2 is :" << &student2 << std::endl;

// }

// ********************************************************************************************************** //
// Testing Enheritance 
// ********************************************************************************************************** //
#include "Son.hpp"
#include "Father.hpp"

int main ( void )
{
	Person* person1 = new Person("Insane", "Natural", 0, 0);
	Person* 	son1 = new Son("Othmane", "Black", 20, 1.95, 1);
	Person*	father1= new Father("Abolahab", "White", 45, 2.0, true);

	person1->SelfIntroduce();
	son1->SelfIntroduce();
	father1->SelfIntroduce();

	person1->HowItsaves();
	son1->HowItsaves();
	father1->HowItsaves();

	delete person1;
	delete son1;
	delete father1;

}