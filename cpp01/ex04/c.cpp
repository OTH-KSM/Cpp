#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string mainString = "This is a sample string to search within.";
    std::string searchString = "to";

    // Find the position of the searchString in mainString
    size_t found = mainString.find(searchString);


	cout << mainString.substr(0, found);
	cout << "mama";
	cout << found + 2 << endl;
	cout << mainString.length() << endl;
	cout << mainString.substr(found + 2, mainString.length()) << endl;
	// cout << mainString.substr(found + 2, mainString.size() - 1);
	// cout << std::string::npos << endl;
    // if (found != std::string::npos) {
    //     std::cout << "String found at position: " << found << std::endl;
    // } else {
    //     std::cout << "String not found." << std::endl;
    // }

    return 0;
}