#include <iostream>
using namespace std;

class SwapNumbers 

{
private:
    int a, b;

public:
    void input() 
    
    {
        cout << "Enter two numbers:\n";
        cin >> a >> b;
    }

    void display() 
    
    {
        cout << "a = " << a << ", b = " << b << endl;
    }

    friend void swapValues(SwapNumbers &obj);
};

void swapValues(SwapNumbers &obj) 

{
    int temp = obj.a;
    obj.a = obj.b;
    obj.b = temp;
}

int main() 

{
    SwapNumbers obj;
    obj.input();

    cout << "\nBefore Swapping:\n";
    obj.display();

    swapValues(obj);

    cout << "\nAfter Swapping:\n";
    obj.display();

    return 0;
}
