#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string name;
    int age;

    inputPersonData() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
    }
};

class Student:public Person {
public:
    float percentage;

    void inputStudentData() {
        inputPersonData();
        cout << "Enter Percentage: ";
        cin >> percentage;
        
    }
};

class Teacher:public Person {
public:
    float salary;

    void inputTeacherData() {
        inputPersonData();
        cout << "Enter Salary: ";
        cin >> salary;
    }
};

int main() {
    Student student;
    Teacher teacher;

    cout << "Enter Student Details:\n";
    student.inputStudentData();
    cout << "\nEnter Teacher Details:\n";
    teacher.inputTeacherData();
    cout << "\nStudent Details:\n";
    cout << "Name: " << student.name << ", Age: " << student.age << ", Percentage: " << student.percentage<< endl;
    cout << "\nTeacher Details:\n";
    cout << "Name: " << teacher.name << ", Age: " << teacher.age << ", Salary: " << teacher.salary << endl;

    return 0;
}

