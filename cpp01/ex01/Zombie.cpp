#include "Zombie.hpp"

Zombie::Zombie() {
    
}

Zombie::~Zombie() {

}

void    Zombie::announce( void ) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string &newName) {
    name = newName;
}