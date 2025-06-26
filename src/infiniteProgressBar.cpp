#include <iostream>
#include <thread>

int main() {
    int i = 0;
    while (true) {
        std::cout << "\rProgress: " << i << "%" << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(25));
        i++;
    }
    return 0;
}
