#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    float marks;
};

int main() {
    Student student;

    cout << "Enter roll number: ";
    cin >> student.rollNumber;
    cin.ignore();

    cout << "Enter student name: ";
    getline(cin, student.name);

    cout << "Enter marks: ";
    cin >> student.marks;

    cout << "\nStudent details\n";
    cout << "Roll number: " << student.rollNumber << endl;
    cout << "Name: " << student.name << endl;
    cout << "Marks: " << student.marks << endl;
    return 0;
}
