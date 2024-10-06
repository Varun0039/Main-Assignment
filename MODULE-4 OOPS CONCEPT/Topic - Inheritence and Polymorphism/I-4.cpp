#include<iostream>
using namespace std;

class studentdetail{
	public:
		string name;
		student()
		{
			cout<<"Enter student name:"<<endl;
			cin>>name;
		}
};
class Test{
    public:
        float marks1;
        float marks2;
        Marks() 
		{
        cout << "Enter Marks for Subject 1: ";
        cin >> marks1;
        cout << "Enter Marks for Subject 2: ";
        cin >> marks2;
        }
};

class Result:public studentdetail, public Test {
public:
    float totalMarks;

    calculateTotalMarks() {
        totalMarks = marks1 + marks2;
    }
    void displayResult() {
    	cout << "Marksheet of Student" <<endl;
        cout << "Student Name :" << name <<endl;
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

main()
{
	Result marksheet;
	marksheet.student();
	marksheet.Marks();
	marksheet.calculateTotalMarks();
	marksheet.displayResult();
}
