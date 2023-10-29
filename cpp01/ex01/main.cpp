#include "Zombie.hpp"
using namespace std;

int main ( void )
{
    Zombie *tmp = zombieHorde(25, "Ahmed");

    for (int i = 0; i < 25; i++) {
        (tmp + i)->announce();
    }
    delete[] tmp;
}
//This delete not well understanded