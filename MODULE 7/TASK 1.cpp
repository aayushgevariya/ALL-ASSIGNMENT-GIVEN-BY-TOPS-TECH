#include <iostream>
using namespace std;

int main() 

{
    int* ptr = new int;

    *ptr = 50;

    cout << "Value at ptr: " << *ptr << endl;

    delete ptr;

    ptr = nullptr;

    return 0;
}
