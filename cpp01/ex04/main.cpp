#include <iostream>
#include <string> 
#include <fstream>
#include <filesystem>

using std::cout;
using std::endl;
using std::cerr;

int main(int argc, char **argv)
{

    if (argc != 4)
    {
        std::cout << "insufficient number of input" << std::endl;
        return (1);
    }
    std::ifstream readFile(argv[1]);
    if (!readFile.is_open())
    {
        std::cerr <<"Error: error opening input file"<< std::endl;
        return (1);
    }
    std::string new_file_name = std::string(argv[1]) + std::string(".replace");
    std::ofstream outputFile(new_file_name.c_str());
    std::string line;
    if (!outputFile.is_open())
    {
        std::cerr <<"Error: error opening output file"<< std::endl;
        return (1);
    }
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    while (std::getline(readFile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.replace(pos, s1.length(), s2);
            pos += s1.length();
        }
        outputFile << line << endl;
    }
    readFile.close();
    outputFile.close();
    return (0);
}