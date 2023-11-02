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
            found = var.find(s1);
            size_t start = 0;
            while ((found = var.find(s1, start)) != string::npos) {
                copyfile << var.substr(start, found - start);
                copyfile << s2;
                start = found + s1.size();
            }
            copyfile << var.substr(start);
            if (!infile.eof()) {
                copyfile << endl;
            }
        }
        copyfile.close();
        infile.close();
    }
}

