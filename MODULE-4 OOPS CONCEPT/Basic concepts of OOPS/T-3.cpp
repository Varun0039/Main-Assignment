#include <iostream>
using namespace std;
class Circle {
private:
    int radius;

public:
    setRadius(int r) {
        radius = r;
    }

    area() {
        return 3.14 * radius * radius;
    }

    circumference() {
        return 2 *3.14 * radius;
    }

    getRadius() {
        return radius;
    }
};
int main() {
    Circle circle;
    int radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    circle.setRadius(radius);
    cout << "Area of the circle:" << circle.area() << endl;
    cout << "Circumference of the circle:"<< circle.circumference() << endl;
    return 0;
}

