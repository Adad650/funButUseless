#include <iostream>
#include <thread>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    while (true) {
        std::cout << "Random number: " << std::rand() << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
    return 0;
}
