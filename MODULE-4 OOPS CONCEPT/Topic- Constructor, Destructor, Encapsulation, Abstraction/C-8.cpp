#include <iostream>
#include <string>
using namespace std;

class Address {
private:
    string city;
    string state;

public:
    Address(string ct, string st) {
        city = ct;
        state = st;
    }
    display(){
        cout << city << endl;
        cout << state <<endl;
    }
};

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    float marks;
    Address address

public:
    Student(string n, string c, int r, float m, Address addr) {
        name = n;
        studentClass = c;
        rollNumber = r;
        marks = m;
        address = addr; 
    }

    calculateGrade(){
        if{
		(marks >= 90)
		} 
		return 'A';
        else if
		{
        	(marks >= 75) 
		}
		return 'B';
        else if
		{
		    (marks >= 50) 	
		}
		 return 'C';
        else 
		{
		return 'D';
	}
    }

    void displayInfo(){
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        cout << "Address: ";
        address.display();
    }
};

int main() {
    string name, studentClass, city, state;
    int rollNumber;
    float marks;

    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter class: ";
    cin>>studentClass;
    cout<<"Enter roll number: ";
    cin>>rollNumber;
    cout<<"Enter marks: ";
    cin>>marks; 
    cout << "Enter city: ";
	cin>>city;
    cout << "Enter state: ";
	cin>>state;

    Address studentAddress(city, state);
    Student student(name, studentClass, rollNumber, marks, studentAddress);
    
    cout<<"\nStudent Information:"<< endl;
    student.displayInfo();

    return 0;
}

