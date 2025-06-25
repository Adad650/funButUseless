#include <iostream>
#include <thread>
#include <chrono>

int main() {
    std::cout << "Starting important process...\n";
    for (int i = 0; i <= 100; i++) {
        std::cout << "\rProgress: " << i << "%" << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
    std::cout << "\nProcess complete. Nothing happened." << std::endl;
    return 0;
}
