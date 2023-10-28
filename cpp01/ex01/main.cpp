#include "Zombie.hpp"
using namespace std;

int main ( void )
{
    Zombie *tmp = zombieHorde(8, "Ahmed");
    Zombie *head = tmp;

    for (int i = 0; i < 8; i++) {
        cout << sizeof(tmp + i) << endl;
        cout << tmp + i << endl;
        (tmp + i)->announce();
        // system("leaks Zombie");
    }
    // for (int i = 7; i > 0; i++) {
    //     cout << (*head) + i << "Freed Seccesfully" << endl;
    //     delete (head + i);
    // }
}