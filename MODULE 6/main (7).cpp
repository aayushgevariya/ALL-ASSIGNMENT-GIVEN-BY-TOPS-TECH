#include <iostream>
#include <string>
using namespace std;

class Person 
{
protected:
    string name;
    int age;
public:
    void readPersonData() 
    {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore(); 
    }

    void displayPersonData() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : virtual public Person 
{
protected:
    float percentage;
public:
    void readStudentData() 
    {
        cout << "Enter Percentage: ";
        cin >> percentage;
        cin.ignore();
    }

    void displayStudentData() 
    {
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : virtual public Person 
{
protected:
    float salary;
public:
    void readTeacherData() 
    {
        cout << "Enter Salary: ";
        cin >> salary;
        cin.ignore();
    }

    void displayTeacherData() 
    {
        cout << "Salary: Rs. " << salary << endl;
    }
};

class TeachingAssistant : public Student, public Teacher 
{
public:
    void readAllData() 
    {
        readPersonData();
        readStudentData();
        readTeacherData();
    }

    void displayAllData() 
    {
        displayPersonData();
        displayStudentData();
        displayTeacherData();
    }
};

int main() 
{
    TeachingAssistant ta;
    cout << "Enter Details" << endl;
    ta.readAllData();

    cout << "\n Displaying Details" << endl;
    ta.displayAllData();

    return 0;
}
