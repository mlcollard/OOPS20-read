/*
    readcinread.cpp

    Read an entire file from stdin using std::cin::read
*/

#include <iostream>

int main(int argc, char* argv[]) {

    long total = 0;
    while (true) {

        const int BUFFER_SIZE = 16 * 16 * 1024;
        char buf[BUFFER_SIZE + 1];
        std::cin.read(buf, BUFFER_SIZE);
        if (std::cin.gcount() == 0)
            break;
        total += std::cin.gcount();
    }

    std::cout << total << '\n';

    return 0;
}
