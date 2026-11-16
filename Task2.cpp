#include <iostream>
using namespace std;

int main() {
    string name;
    int rollNumber;
    float gpa;

    for (int i = 1; i <= 3; i++) {
        cout << "\nEnter details of Student " << i << endl;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter GPA: ";
        cin >> gpa;

        cout << "\nStudent " << i << " Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "GPA: " << gpa << endl;
    }

    return 0;
}