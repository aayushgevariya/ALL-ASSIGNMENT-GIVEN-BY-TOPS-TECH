#include <iostream>
using namespace std;

inline int multiply(int a, int b) 

{
    return a * b;
}

inline int cube(int x) 

{
    return x * x * x;
}

int main() 

{
    int num1, num2;

    cout << "Enter two numbers for multiplication: ";
    cin >> num1 >> num2;

    cout << "Multiplication of " << num1 << " and " << num2 << " = " << multiply(num1, num2) << endl;

    int num3;
    cout << "Enter a number to find its cube: ";
    cin >> num3;

    cout << "Cube of " << num3 << " = " << cube(num3) << endl;

    return 0;
}
