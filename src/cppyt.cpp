#include <iostream>
#include <string>
#include "py_list.h"
#include "py_parse.h"

int main(int argc, char **argv)
{
    if(argc < 2){
        std::cout << "CPPYT ZviWex(2018)" << std::endl;
        std::cout << "Usage: cppyt <python file name>";
        return 1;
    }
    std::string file = argv[1];
    std::cout << "CPPYT ZviWex(2018) " << file << std::endl;

    py_parse parse(file);

    parse.run();
    /*py_list p ("[1, 2, 3, 4]");

    std::cout << p.str();
    std::cout << p.repr();*/

    return 5;
}