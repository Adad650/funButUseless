#include <iostream>
#include <thread> // For sleep functionality

float number;

int main() {
    std::cout << "Input a number and I will guess it" << std::endl;
    std::cin >> number;
    std::cout << "Trying to connect to neural pathways" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500)); 
    std::cout << "Connecting to brain via bluetooth" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "Connection at 10%" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(5));
    std::cout << "Connection at 20%" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
    std::cout << "Connection at 30%" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(400));
    std::cout << "Connection at 40%" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
    std::cout << "Connection at 50%" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << "Connection at 60%" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(700));
    std::cout << "Connection at 70%" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    std::cout << "Connection at 80%" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(2));
    std::cout << "Connection at 90%" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    std::cout << "Connection at 100%" << std::endl;
    std::cout << "Successfully connected!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(37));
    std::cout << "Guessing number..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    std::cout << "Running neural network..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "Analyzing brainwaves..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
    std::cout << "Decoding thoughts..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "Baud rate set at 115200" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "Your number is being processed..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "Finalizing guess..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(800));
    std::cout << "The number you are thinking of is: " << number << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << "Thank you for playing!" << std::endl;
    return 0;
}
