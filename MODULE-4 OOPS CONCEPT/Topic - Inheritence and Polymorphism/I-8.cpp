#include <iostream>
using namespace std;

class Operations {
public:
    add(int a, int b) {
        return a + b;
    }

    add(float a, float b) {
        return a + b;
    }

    subtract(int a, int b) {
        return a - b;
    }

    subtract(float a, float b) {
        return a - b;
    }

    multiply(int a, int b) {
        return a * b;
    }

    multiply(float a, float b) {
        return a * b;
    }
    

    divide(int a, int b) {
            return a / b;
        }
    divide(float a, float b) {
            return a / b;
        }
        
};

int main() {
    Operations math;

     int intA = 10, intB = 5;
    float floatA = 10.5, floatB = 5.2;

    cout << "Integer Operations:" << endl;
    cout << "Addition: " << math.add(intA, intB) << endl;
    cout << "Subtraction: " << math.subtract(intA, intB) << endl;
    cout << "Multiplication: " << math.multiply(intA, intB) << endl;
    cout << "Division: " << math.divide(intA, intB) << endl;

    cout << "\nFloat Operations:" << endl;
    cout << "Addition: " << math.add(floatA, floatB) << endl;
    cout << "Subtraction: " << math.subtract(floatA, floatB) << endl;
    cout << "Multiplication: " << math.multiply(floatA, floatB) << endl;
    cout << "Division: " << math.divide(floatA, floatB) << endl;
    return 0;
}

