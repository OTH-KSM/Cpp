#include <iostream>
#include <fstream>
using namespace std;


// Read from a file
// ***********************************************************
int main(int argc, char *argv[])
{
    if (argc != 4) {
        cout << "args are not 3 " << endl;
        return (1);
    }
    ofstream copyfile ("copy.txt");
    ofstream outfile (argv[1]);

    if (outfile.is_open())
    {
        outfile << "Othmane is my first name" << endl;
        outfile << "Kassimi is my second name";
        outfile.close();
    }
    ifstream infile (argv[1]);
    std::string s1 = argv[2];
    int len = s1.size();
    if (infile.is_open())
    {
        string var;
        size_t found;
        while (getline(infile, var))
        {
            found = var.find(argv[2]);
            copyfile << var.substr(0, found);
            copyfile << argv[3];
            copyfile << var.substr(found + len, var.length());
            if (!infile.eof())
                copyfile << endl;
        }
        copyfile.close();
        infile.close();

    }
    return 0;
}


// Notes :
// >> used to read
// {
//      infile >> var; needs variable to store the data
//      it reads the first word in the file and store it in var
//      until its find a white space or a new line
//      it depands on the type of the variable
//      if the variable is a string it will read the first word
//      if the variable is a char it will read the first char
// }

// ifstream used to read from a file
// {
//      ifstream file;
//     it can't create a file so to create the file u shoul use ofstream of fstream
// }


// u can't create a file for reading with ifstram because ifstream is used just to read
// and logically u can't just open a file and read from it because it wil be emty
// so for that u should open the file with fstream of ofstram, add some content to it
// and then read from it using ifstream
// ***********************************************************




// Write to a file
// ***********************************************************
// int main()
// {
//     ofstream file ("example.txt");     // ofstream can only write and it can't read a file
//     // file.open, ios::out); // ios::out is the default mode for writing
//     if (!file) {
//         cout << "Error opening file" << endl;
//         return 1;
//     }
//     file << "This is some text" << endl;
//     file.close();
// }
// Notes : 
// << used to write 
// ofstream used to write





// General notes :
// to use fstream to create a file u should use open
// to use ofstream to create a file u should use open of
// an implicit syntax  ofstream file ("example.txt"); 
// if ifstream not allowed to create a file