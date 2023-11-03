#include <iostream>

void    _UpperSring(std::string str)
{
    for (std::string::iterator c = str.begin(); c != str.end(); c++)
        std::cout << (char)toupper(*c);
}

int main (int argc, char *argv[])
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (EXIT_FAILURE);
    }
    for (int i = 1; i < argc; i++)  {
        _UpperSring(argv[i]);
    }
    std::cout << std::endl;
}
