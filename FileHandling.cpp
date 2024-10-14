#include <fstream>
#include <iostream>
using namespace std;

int main() {
    // Create an ofstream (output file stream) object.
    ofstream oFile;

    //Create a file (if doesn't exist) and open it.
    oFile.open("my-note.txt");

    //Write on file.
    oFile<<" Hi Arjun! \n";
    oFile<< " I love you \n";
    oFile<< "We met in " <<14 << " Dec. \n";

    //Close the opened file.
    oFile.close();

    return 0;
}