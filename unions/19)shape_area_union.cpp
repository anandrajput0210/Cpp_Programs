#include <iostream>
using namespace std;

enum ShapeType {
    CIRCLE = 1,
    RECTANGLE = 2
};

struct RectangleData {
    double length;
    double width;
};

union ShapeData {
    double radius;
    RectangleData rectangle;
};

int main() {
    ShapeData shape;
    int choice;
    const double PI = 3.14159;

    cout << "Choose shape (1=Circle, 2=Rectangle): ";
    cin >> choice;

    if (choice == CIRCLE) {
        cout << "Enter radius: ";
        cin >> shape.radius;
        cout << "Area: " << PI * shape.radius * shape.radius << endl;
    } else if (choice == RECTANGLE) {
        cout << "Enter length and width: ";
        cin >> shape.rectangle.length >> shape.rectangle.width;
        cout << "Area: " << shape.rectangle.length * shape.rectangle.width << endl;
    } else {
        cout << "Invalid shape." << endl;
    }

    return 0;
}
