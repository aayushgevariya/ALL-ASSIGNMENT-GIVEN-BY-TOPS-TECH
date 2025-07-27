#include <iostream>
using namespace std;

template <typename T>
void sortArray(T a[], int n) 

{
    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
            if(a[j] < a[i])
                swap(a[i], a[j]);
}

template <typename T>
void display(T a[], int n) 

{
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

int main() 

{
    int a[] = {4, 2, 9, 1};
    int n = sizeof(a)/sizeof(a[0]);

    cout << "Before: ";
    display(a, n);

    sortArray(a, n);

    cout << "After: ";
    display(a, n);

    return 0;
}
