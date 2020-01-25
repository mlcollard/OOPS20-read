/*
    readcin.cpp

    Read an entire file from stdin using std::cin
*/

#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {

    long total = 0;
    char c;
    std::ifstream in(argv[1]);
    in.unsetf(std::ios::skipws);
    while (in >> c) {
        ++total;
    }

    std::cout << total << '\n';

    return 0;
}
