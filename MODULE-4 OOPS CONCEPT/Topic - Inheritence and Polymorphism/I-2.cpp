#include <iostream>
using namespace std;

class Shape {
public:
    float length;
    float width;

    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }
};

class Rectangle:public Shape {
public:
    calculateArea() {
        return length * width;
    }

    displayArea() {
        cout << "Area of the Rectangle: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect;
    rect.input();
    rect.displayArea();
    return 0;
}

