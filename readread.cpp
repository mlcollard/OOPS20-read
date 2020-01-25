/*
    readread.cpp

    Read an entire file from stdin using read()
*/

#include <iostream>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char* argv[]) {

    long total = 0;
    while (true) {

        const int BUFFER_SIZE = 16 * 1024;
        char buf[BUFFER_SIZE + 1];
        ssize_t numbytes = 0;
        while (((numbytes = read(0, buf, BUFFER_SIZE)) == -1) && (errno == EINTR)) {
        }
        if (numbytes == -1)
            return 1;
        if (numbytes == 0)
            break;
        total += numbytes;
    }

    std::cout << total << '\n';

    return 0;
}
