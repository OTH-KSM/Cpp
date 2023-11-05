#include "Zombie.hpp"

Zombie::Zombie() {
    
}

Zombie::~Zombie() {
    std::cout << name << "Has been Destroyed !" << std::endl;
}

void    Zombie::announce( void ) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string &newName) {
    name = newName;
}