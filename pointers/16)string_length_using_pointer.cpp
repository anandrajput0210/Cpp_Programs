#include <iostream>
using namespace std;

int main() {
    char text[] = "Hello C++";
    char* ptr = text;
    int length = 0;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    cout << "String: " << text << endl;
    cout << "Length: " << length << endl;
    return 0;
}
