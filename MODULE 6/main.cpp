#include <iostream>
#include <string>
using namespace std;

class BankAccount 

{
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    void assignValues(string name, int accNum, string accType, double initialBalance) 
    
    {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }

    void deposit(double amount) 
    
    {
        if (amount > 0)
        
        {
            balance += amount;
            cout << "Amount deposited successfully.\n";
        } 
        
        else 
        
        {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount) 
    
    {
        if (amount > 0 && amount <= balance) 
        
        {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        } 
        
        else 
        
        {
            cout << "Insufficient balance or invalid amount.\n";
        }
    }

    void display() const 
    
    {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

int main() 

{
    BankAccount account;

    account.assignValues("Aayush Gevariya", 123456, "Savings", 5000.0);

    account.deposit(2000.0);

    account.withdraw(1500.0);

    account.display();

    return 0;
}
