#include <iostream>
using namespace std;

class AreaCalculator {
public:
    
    area(int radius) {
        return 3.14* radius * radius;  
    }
    area(int length, int breadth) {
        return length*breadth;          
    }
    area(int base, int height, int triangle) {
       return 0.5*base*height;
    }
};

int main() {
    AreaCalculator calculator;

    int circleRadius, rectangleLength, rectangleBreadth, triangleBase, triangleHeight;
    cout << "Enter radius of the circle: ";
    cin >> circleRadius;
    cout << "Area of Circle: " << calculator.area(circleRadius) << endl;

    cout << "Enter length of rectangle: ";
    cin >> rectangleLength;
    cout << "Enter breadth of rectangle: ";
    cin >> rectangleBreadth;
    cout << "Area of Rectangle: " << calculator.area(rectangleLength, rectangleBreadth) << endl;

    cout << "Enter base of triangle: ";
    cin >> triangleBase;
    cout << "Enter height of triangle: ";
    cin >> triangleHeight;
    cout << "Area of Triangle: " << calculator.area(triangleBase, triangleHeight, true) << endl;

    return 0;
}

