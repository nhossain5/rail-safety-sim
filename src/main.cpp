#include <iostream>

int main()
{
    std::cout << "Hello World!" << std::endl;
    // std::endl prints a newline and flushes the output buffer
    // \n only prints the newline
    // flushing in every line is slower, so use \n in loops
    // use std::endl or std::flush only for immediate use like a crash report
    return 0;
}