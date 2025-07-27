#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) 
{
    T temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int x = 10, y = 20;
    float f1 = 1.5, f2 = 2.5;
    char c1 = 'A', c2 = 'B';

    cout << "Before Swapping \n";
    cout << "Integers: x = " << x << ", y = " << y << endl;
    cout << "Floats: f1 = " << f1 << ", f2 = " << f2 << endl;
    cout << "Characters: c1 = " << c1 << ", c2 = " << c2 << endl;

    swapValues(x, y);
    swapValues(f1, f2);
    swapValues(c1, c2);

    cout << "\n After Swapping \n";
    cout << "Integers: x = " << x << ", y = " << y << endl;
    cout << "Floats: f1 = " << f1 << ", f2 = " << f2 << endl;
    cout << "Characters: c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}
