#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    setCompany(string c) {
        company=c;
    }

    setModel(string m) {
        model=m;
    }

    setYear(int y) {
        year=y;
    }

    string getCompany() {
        return company;
    }

    string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }
};

int main() {
    Car myCar;
    string company,model;
    int year;

    cout<<"Enter car company: ";
    cin>>company;
    myCar.setCompany(company);

    cout<<"Enter car model: ";
    cin>>model;
    myCar.setModel(model);

    cout<<"Enter manufacturing year: ";
    cin>>year;
    myCar.setYear(year);

    cout << "Car Details:" << endl;
    cout << "Company: " << myCar.getCompany() << endl;
    cout << "Model: " << myCar.getModel() << endl;
    cout << "Year: " << myCar.getYear() << endl;

    return 0;
}

