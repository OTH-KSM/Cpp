#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    fstream file ("n9ra", ios::in | ios::out);
    fstream file2 ("n7at", ios::out);

    file << "Hello World" << endl;


    char c;

    while (!file.eof())
    {
        file >> c;
        file2 << c;
    }
    


    return 0;
}
