#include "Zombie.hpp"
using namespace std;

int main ( void )
{
    Zombie *tmp = zombieHorde(8, "Ahmed");

    for (int i = 0; i < 8; i++) {
        cout << tmp + i << endl;
        (tmp + i)->announce();
    }
}