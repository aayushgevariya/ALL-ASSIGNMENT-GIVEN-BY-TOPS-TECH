#include <iostream>
#include <fstream>
using namespace std;

int main() 

{
    string name;
    int age;

    ofstream outFile("data.txt"); 

    if (!outFile) 
    
    {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    outFile << name << endl;
    outFile << age << endl;

    outFile.close(); 
    cout << "Data written to file successfully.\n";

    ifstream inFile("data.txt");

    if (!inFile) 
    
    {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    string fileName;
    int fileAge;

    getline(inFile, fileName);
    inFile >> fileAge;

    cout << "\nData read from file:" << endl;
    cout << "Name: " << fileName << endl;
    cout << "Age: " << fileAge << endl;

    inFile.close();

    return 0;
}
