#include <iostream>

int main() {
    while (true) {
        for (int i = 0; i < 1000000; i++) {}
        std::cout << "Heating up CPU..." << std::endl;
    }
    return 0;
}
