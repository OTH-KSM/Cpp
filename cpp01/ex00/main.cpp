#include "Zombie.hpp"
using namespace std;

int main ( void )
{
    Zombie *tmp = newZombie("Othmane");
    tmp->announce();
    delete tmp;
    randomChump("Omar");
}