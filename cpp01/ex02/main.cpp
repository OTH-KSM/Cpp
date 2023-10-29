#include <iostream>
#include <string>
using namespace std;

int main ( void )
{
    string stringORG = "HI THIS IS BRAIN";
    const char *stringPTR = stringORG.c_str();
    string &stringREF = stringORG;

    cout << stringORG << endl;
    cout << stringPTR << endl;
    cout << stringREF << endl;

    cout << &stringORG << endl;
    cout << &stringPTR << endl;
    cout << &stringREF << endl;

    stringREF.append("koma");
    cout << stringORG << endl;
    cout << stringPTR << endl;
    cout << stringREF << endl;

    cout << &stringORG << endl;
    cout << &stringPTR << endl;
    cout << &stringREF << endl;

    cout << sizeof(stringORG )<< endl;
    cout << sizeof(stringPTR) << endl;
    cout << sizeof(stringREF) << endl;

}
//what is the difference betwen
// string stringORG = "HI THIS IS BRAIN";
//    string *stringPTR = &stringORG;

// and 
//string stringORG = "HI THIS IS BRAIN";
//    const char *stringPTR = stringORG.c_str();
