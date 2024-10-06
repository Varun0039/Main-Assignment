#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    Person(string n) {
        name = n;
        
    }
};

class Student:public Person{
public:
    int rollNumber;

    Student(string n,int r): Person(n){
        rollNumber = r;
        
    }
};
class Graduate:public Student {
public:
    string degree;

    Graduate(string n, int r, string d) : Student(n, r) {
        degree = d;
        
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Degree: " << degree << endl;
    }
};
int main() {
    Graduate grad("Varun", 101, "Computer Science");
    grad.display();

    return 0;
}

