#include <iostream>
using namespace std;

class Cricketer 

{
protected:
    string name;
    int matches;

public:
    void inputCricketerData() 
    
    {
        cout << "Enter cricketer's name: ";
        getline(cin, name);
        cout << "Enter number of matches played: ";
        cin >> matches;
    }
};

class Batsman : public Cricketer 

{
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    void inputData() 
    
    {
        inputCricketerData();  
        cout << "Enter total runs scored: ";
        cin >> totalRuns;
        cout << "Enter best performance (highest score): ";
        cin >> bestPerformance;
        calculateAverage();
    }

    void calculateAverage() 
    
    {
        if (matches != 0)
            averageRuns = (float)totalRuns / matches;
        else
            averageRuns = 0;
    }

    void displayData() 
    
    {
        cout << "\n--- Batsman Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Matches Played: " << matches << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() 

{
    Batsman b;

    cin.ignore(); 
    b.inputData();
    b.displayData();

    return 0;
}
