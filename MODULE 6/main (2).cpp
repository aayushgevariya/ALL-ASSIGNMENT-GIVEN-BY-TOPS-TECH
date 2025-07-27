#include <iostream>
using namespace std;

class Interest 

{
private:
    float principal;
    int year;
    float rate;
    float simpleInterest;

public:
    Interest(int p, int y, int r) 
    
    {
        principal = p;
        year = y;
        rate = r;
        simpleInterest = (principal * rate * year) / 100.0;
    }

    Interest(int p, int y, float r = 2.5)
    
    {
        principal = p;
        year = y;
        rate = r;
        simpleInterest = (principal * rate * year) / 100.0;
    }

    void display() const 
    
    {
        cout << "Principal: " << principal << endl;
        cout << "Years: " << year << endl;
        cout << "Rate: " << rate << "%" << endl;
        cout << "Simple Interest: Rs. " << simpleInterest << endl;
        cout << "\n";
    }
};

int main() 

{
    Interest i1(10000, 2, 5);
    cout << "Using Constructor with int rate:\n";
    i1.display();

    Interest i2(8000, 3);
    cout << "Using Constructor with default float rate:\n";
    i2.display();

    Interest i3(6000, 4, 3.75f);
    cout << "Using Constructor with custom float rate:\n";
    i3.display();

    return 0;
}
