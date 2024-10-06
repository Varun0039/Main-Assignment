#include <iostream>
using namespace std;

class Calculator {
public:
    int num1;
    int num2;
    Calculator(int a,int b) { // Constructor
        num1 = a;
        num2 = b;
        cout << "A:" << num1 << endl;
        cout << "B:" << num2 << endl;
    }
    add() {
        return num1+num2;
    }

    subtract() {
        return num1-num2;
    }

    multiply() {
        return num1*num2;
    }

    div() {
        return num1/num2;
    }
    displayResults() {
        cout<<"Addition:"<<add()<<endl;
        cout<<"Subtraction:"<<subtract()<<endl;
        cout<<"Multiplication:"<<multiply()<<endl;
        cout<<"Division:"<<div()<<endl;
    }
};
int main() {
    Calculator obj(10, 20);
    obj.displayResults();    

    return 0;
}

