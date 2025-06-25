#include <iostream>
#include <thread>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    const char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    while (true) {
        char c = chars[std::rand() % (sizeof(chars) - 1)];
        std::cout << "\033[32m" << c << "\033[0m" << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(5));
    }
    return 0;
}
