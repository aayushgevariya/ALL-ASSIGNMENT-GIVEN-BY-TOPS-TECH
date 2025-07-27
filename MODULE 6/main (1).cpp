#include <iostream>
#include <string>
using namespace std;

class Lecture

{
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numberOfLectures;

public:
    void assignDetails(string lName, string sName, string cName, int nLectures)
    
    {
        lecturerName = lName;
        subjectName = sName;
        courseName = cName;
        numberOfLectures = nLectures;
    }

    void displayDetails() const 
    
    {
        cout << "Lecturer Name    : " << lecturerName << endl;
        cout << "Subject Name     : " << subjectName << endl;
        cout << "Course Name      : " << courseName << endl;
        cout << "No. of Lectures  : " << numberOfLectures << endl;
        cout << " " << endl;
    }
};

int main() 

{
    const int totalLecturers = 5;
    Lecture lectures[totalLecturers];

    for (int i = 0; i < totalLecturers; i++) 
    
    {
        string name, subject, course;
        int numLectures;
        cout << "Enter details for Lecturer " << (i + 1) << ":\n";
        cout << "Name: ";
        getline(cin, name);
        cout << "Subject: ";
        getline(cin, subject);
        cout << "Course: ";
        getline(cin, course);
        cout << "Number of Lectures: ";
        cin >> numLectures;
        cin.ignore();
        lectures[i].assignDetails(name, subject, course, numLectures);
        cout << "\n";
    }

    cout << "\nLecture Details:\n";
    for (int i = 0; i < totalLecturers; i++) 
    
    {
        lectures[i].displayDetails();
    }

    return 0;
}
