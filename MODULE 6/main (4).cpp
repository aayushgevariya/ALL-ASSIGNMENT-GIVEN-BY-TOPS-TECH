#include <iostream>
using namespace std;

class Matrix1D 
{
private:
    int arr[100];
    int size;

public:
    void input(int n) 
    {
        size = n;
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++) 
        
        {
            cin >> arr[i];
        }
    }

    Matrix1D operator+(const Matrix1D &m) 
    
    {
        Matrix1D result;
        result.size = size;

        for (int i = 0; i < size; i++) 
        
        {
            result.arr[i] = arr[i] + m.arr[i];
        }

        return result;
    }

    void display() 
    
    {
        cout << "Matrix Elements: ";
        for (int i = 0; i < size; i++) 
        
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() 

{
    Matrix1D m1, m2, m3;
    int n;

    cout << "Enter size of 1D matrices: ";
    cin >> n;

    cout << "Enter elements for Matrix 1:\n";
    m1.input(n);

    cout << "Enter elements for Matrix 2:\n";
    m2.input(n);

    m3 = m1 + m2;

    cout << "\nMatrix 1: ";
    m1.display();

    cout << "Matrix 2: ";
    m2.display();

    cout << "Sum (Matrix1 + Matrix2): ";
    m3.display();

    return 0;
}
