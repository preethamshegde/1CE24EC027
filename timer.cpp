#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

class Timer {
public:
    void countdown(int seconds) {
        while (seconds > 0) {
            cout << "\rTime remaining: " << seconds << " seconds ";
            cout.flush();
            this_thread::sleep_for(chrono::seconds(1));
            --seconds;
        }

        cout << "\rTime's up!                      \n";
    }
};

int main() {
    int duration;
    cout << "Enter countdown time in seconds: ";
    cin >> duration;

    if (duration <= 0) {
        cout << "Please enter a positive number.\n";
        return 1;
    }

    Timer timer;
    timer.countdown(duration);

    return 0;
}
