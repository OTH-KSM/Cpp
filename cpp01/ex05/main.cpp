#include "harl.hpp"

int main ( int argc, char *argv[] ) {
    if (argc != 1) {
        std::cout << "Usage: ./harl <level>" << std::endl;
        return (EXIT_FAILURE);
    }
    Harl h;
    std::string level;
    std::cout << "Welcome to Harl's Complaints Department" << std::endl;
    std::cout << "Please enter your complaint level : ";
    std::cin >> level;
    h.complain(level);
    
}