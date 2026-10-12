#include <iostream>
using namespace std;

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char input;
    cout << "Enter light colour (R, Y, G): ";
    cin >> input;

    TrafficLight light;
    if (input == 'R' || input == 'r') {
        light = RED;
    } else if (input == 'Y' || input == 'y') {
        light = YELLOW;
    } else if (input == 'G' || input == 'g') {
        light = GREEN;
    } else {
        cout << "Invalid colour." << endl;
        return 0;
    }

    switch (light) {
        case RED: cout << "Stop."; break;
        case YELLOW: cout << "Wait and get ready."; break;
        case GREEN: cout << "Go."; break;
    }
    cout << endl;
    return 0;
}
