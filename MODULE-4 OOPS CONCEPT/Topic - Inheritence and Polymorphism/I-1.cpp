#include <iostream>
#include <string>
using namespace std;

class Cricketer {
public:
    string name;
    int matchesplayed;

    inputCricketerData() {
        cout << "Enter Cricketer's Name: ";
        cin>>name;
        cout << "Enter Number of Matches Played: ";
        cin >> matchesplayed;
        
    }
    
};

class Batsman:public Cricketer {
public:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

    Data() {
    
        cout << "Enter Total Runs: ";
        cin >> totalRuns;
        cout << "Enter Best Performance (Runs in a single match): ";
        cin >> bestPerformance;
        cout<<"Enter Average Runs:";
        cin>>averageRuns;
    }

    void displayData() {
        cout << "\nBatsman Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Matches Played: " << matchesplayed << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << " runs" << endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputCricketerData();
    batsman.Data();
    batsman.displayData();
    return 0;
}

