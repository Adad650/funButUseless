#include <iostream>
#include <thread>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    while (true) {
        int answer = std::rand() % 2;
        std::cout << (answer ? "Yes" : "No") << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }
    return 0;
}
