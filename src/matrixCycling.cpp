#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    srand(time(0));
    char letters[] = {
        'A','B','C','D','E','F','G','H','I','J','K','L','M',
        'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'
    };

    string name;
    cout << "Enter a name: ";
    cin >> name;

    int length = name.size();
    string display(length, ' ');

    for (int i = 0; i < length; ++i) {
        for (int iter = 0; iter < 20; ++iter) {
            for (int j = 0; j < length; ++j) {
                if (j < i)
                    display[j] = name[j];          
                else
                    display[j] = letters[rand() % 26]; 
            }
            cout << "\r" << display << flush;
            std::this_thread::sleep_for(chrono::milliseconds(30));
        }
        display[i] = name[i];
        cout << "\r" << display << flush;
    }

    cout << endl;
    return 0;
}
