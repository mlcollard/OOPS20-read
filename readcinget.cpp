/*
    readcin.cpp

    Read an entire file from stdin using std::cin
*/

#include <iostream>

int main(int argc, char* argv[]) {

    long total = 0;
    char c;
    std::cin.unsetf(std::ios::skipws);
    while (std::cin.get(c)) {
        ++total;
    }

    std::cout << total << '\n';

    return 0;
}
