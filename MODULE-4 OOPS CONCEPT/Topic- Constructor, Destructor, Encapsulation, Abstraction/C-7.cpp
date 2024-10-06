#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    isValid() {
        if (year < 1) return false; 

        if (month < 1 || month > 12) return false; 

        int daysinmonth;
        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                daysinmonth = 31;
                break;
            case 4: case 6: case 9: case 11:
                daysinmonth = 30;
                break;
            case 2:
                daysinmonth = 28;
                break;
            default:
                return false; // Invalid month
        }

        return (day >= 1 && day <= daysinmonth);
    }
};

int main() {
    Date date;
    int d, m, y;

    cout << "Enter day: ";
    cin >> d;
    cout << "Enter month: ";
    cin >> m;
    cout << "Enter year: ";
    cin >> y;

    date.setDate(d, m, y);

    if (date.isValid()) {
        cout << "The date is valid." << endl;
    } else {
        cout << "The date is invalid." << endl;
    }

    return 0;
}

