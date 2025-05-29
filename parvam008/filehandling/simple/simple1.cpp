#include <iostream>
#include <fstream>
using namespace std;

int main() {
    std::ofstream outFile("example.txt");

    if (outFile.is_open()) {
        outFile << "Hello, File Handling...\nThis Is PokeDex Of Musa\n\n\t1.Bulbasaur \n\t2.Pikachu";
        outFile.close();
        std::cout << "Data Written To File Successfully !!\n";
    } else {
        std::cout << "Unable To Open The File For Writing.\n";
    }

    return 0;
}