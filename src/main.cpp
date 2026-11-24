#include <iostream>
#include "track.h"

int main()
{
    Track track;
    if (!track.load("data/track.txt"))
    {
        std::cerr << "Could not open data/track.txt\n";
        return 1;
    }
    // TODO: print each segment: "0-500 m: 25 m/s"
    // TODO: print track.limitAt(700)   (expect 20)

    // std::cout << "Hello World!" << std::endl;
    // std::endl prints a newline and flushes the output buffer
    // \n only prints the newline
    // flushing in every line is slower, so use \n in loops
    // use std::endl or std::flush only for immediate use like a crash report

    return 0;
}