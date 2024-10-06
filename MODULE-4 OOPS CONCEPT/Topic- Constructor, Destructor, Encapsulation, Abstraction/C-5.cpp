#include <iostream>
using namespace std;

class Triangle {
private:
    int side1;
    int side2;
    int side3;

public:
    Triangle(int s1, int s2, int s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    isEquilateral() {
        return (side1 == side2) && (side2 == side3);
    }

    isIsosceles() {
        return (side1 == side2) || (side2 == side3) || (side1 == side3);
    }

    isScalene() {
        return (side1 != side2) && (side2 != side3) && (side1 != side3);
    }

    display() {
        if ( isEquilateral()) {
            cout << "The triangle is Equilateral." << endl;
        } else if ( isIsosceles()) {
            cout << "The triangle is Isosceles." << endl;
        } else if (isScalene()) {
            cout << "The triangle is Scalene." << endl;
        } else {
            cout << "Invalid triangle sides." << endl;
        }
    }
};

int main(){
    double s1, s2, s3;

    cout<<"Enter the lengths of the three sides of the triangle: ";
    cin>>s1>>s2>>s3;

    Triangle triangle(s1, s2, s3);
    triangle.display();

    return 0;
}

