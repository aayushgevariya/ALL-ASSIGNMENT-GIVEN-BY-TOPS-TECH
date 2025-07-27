#include <iostream>
#include <cstring>
using namespace std;

class MyString 

{
private:
    char str[100];

public:
    MyString() 
    
    {
        str[0] = '\0';
    }

    void input() {
        cout << "Enter a string: ";
        cin.getline(str, 100);
    }

    MyString operator+(const MyString &s) 
    
    {
        MyString temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    void display() 
    
    {
        cout << str << endl;
    }
};

int main() 

{
    MyString s1, s2, s3;

    cout << "String 1:\n";
    s1.input();

    cout << "String 2:\n";
    s2.input();

    s3 = s1 + s2;

    cout << "Concatenated String: ";
    s3.display();

    return 0;
}
