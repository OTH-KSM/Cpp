<<<<<<< HEAD
#include "replace.hpp"
using namespace std;


void _check_filename_path(string filename) {
    size_t found;

    found = filename.find('.');
    if (found == string::npos || filename.substr(found, filename.size() - 1) != ".replace") {
        cout << "You should use .replace as extention for the filename" << endl;
        exit (1);
    }
}

int main(int argc, char *argv[])
{
    if (argc != 4) {
        cout << "Syntax : filename.replace s1 s2" << endl;
        return (1);
    }
    _check_filename_path(argv[1]);
    ofstream outfile (argv[1]);
    if (outfile.is_open())
    {
        outfile << "I woke up early this morning, feeling refreshed and ready for the day" << endl;
        outfile << "ahead. As I prepared breakfast, I hummed a tune, enjoying the quiet" << endl;
        outfile <<  "moments before the rush of the day began. I sipped on my coffee," << endl;
        outfile << "relishing the warmth that spread through me. I reflected on the tasks" << endl;
        outfile <<  "awaiting me and felt a sense of determination. I knew that I was" << endl;
        outfile <<  "capable of tackling whatever challenges lay ahead." << endl;
        outfile.close();
    }
    _replace(argv[1], argv[2], argv[3]);
    return 0;
}


=======
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
>>>>>>> 4d8c9fe7a29ca1d7d42276eeef646658096d41d3
