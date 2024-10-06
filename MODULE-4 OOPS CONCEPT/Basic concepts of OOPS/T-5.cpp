#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setCountry(string c) {
        country = c;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    string getCountry() {
        return country;
    }
};

int main() {
    Person person;
    string name;
    int age;
    string country;

    cout << "Enter your name: ";
    cin>>name;
    person.setName(name);

    cout << "Enter your age: ";
    cin >> age;
    person.setAge(age);

    cout << "Enter your country: ";
    cin>>country;
    person.setCountry(country);

    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;
    return 0;
}

