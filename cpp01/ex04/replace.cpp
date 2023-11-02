#include "replace.hpp"
using namespace std;

void	_replace(string filename, string s1, string s2)	{
	ofstream copyfile ("copy.replace");
    ifstream infile (filename);
    if (infile.is_open())
    {
        string var;
        size_t found;
        while (getline(infile, var))
        {
            while (var.find(s1) != string::npos)
            {
                copyfile << var.substr(0, found);
                copyfile << s2;
                var = var.substr(found + s1.size(), var.length() - found);
                copyfile << var.substr();
            }
            // else
            //     copyfile << var;
            if (!infile.eof())
                copyfile << endl;
        }
        copyfile.close();
        infile.close();

    }
}

