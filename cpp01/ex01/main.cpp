#include "Zombie.hpp"
using namespace std;

int main ( void )
{
    Zombie *tmp = zombieHorde(2, "Ahmed");

    for (int i = 0; i < 2; i++) {
        (tmp + i)->announce();
    }
    delete[] tmp;
}
//This delete not well understanded