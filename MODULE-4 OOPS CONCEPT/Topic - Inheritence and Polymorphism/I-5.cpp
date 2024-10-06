#include <iostream>
using namespace std;

class Students {
public:
    int rollNumber;

    RollNumber() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
    }
};

class Test {
public:
    float marks1;
    float marks2;

    Marks() {
        cout << "Enter Marks for Subject 1: ";
        cin >> marks1;
        cout << "Enter Marks for Subject 2: ";
        cin >> marks2;
    }
};

class Result:public Students, public Test {
public:
    float totalMarks;

    calculateTotalMarks() {
        totalMarks = marks1 + marks2;
    }

    void displayResult() {
        cout << "\nRoll Number: " << rollNumber << endl;
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Result studentResult;

    studentResult.RollNumber();
    studentResult.Marks();
    studentResult.calculateTotalMarks();
    studentResult.displayResult();

    return 0;
}

