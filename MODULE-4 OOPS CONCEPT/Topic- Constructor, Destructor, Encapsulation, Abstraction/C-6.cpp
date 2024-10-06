#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeid;
    int salary;

public:
    Employee(string empname, int empid) {
        name=empname;
        employeeid=empid;
        salary=0;
    }
    
    setSalary(int basesalary, int performancebonus) {
        salary=basesalary+performancebonus;
    }

    void display() {
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee ID: "<<employeeid<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main() {
    string name;
    int id;
    int basesalary, performancebonus;

    cout << "Enter employee name: ";
    cin>>name;
    cout<<"Enter employee ID: ";
    cin>>id;

    Employee emp(name,id);

    cout<<"Enter base salary: ";
    cin>>basesalary;
    cout<<"Enter performance bonus: ";
    cin>>performancebonus;

    emp.setSalary(basesalary, performancebonus);
    emp.display();

    return 0;
}

