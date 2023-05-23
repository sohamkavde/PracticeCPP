/*

Define a class to represent a bank account which includes the following members as Data members:
a) Name of the depositor b) Account Number c) Withdrawal amount d) Balance amount in the account

Member Function:
a) To assign initial values b) To deposit an amount c) To withdraw an amount after checking the balance
d) To display name and balance
Done ;~)
*/
#include <iostream>
#include <iomanip>
using namespace std;

class Bank
{
private:
    string name;
    int acno;
    string accountType;
    int bal;

public:
    void opbal(void);
    void deposit(void);
    void withdraw(void);
    void display(void);
};

void Bank ::opbal()
{
    cout << endl
         << endl;
    cout << "Enter Name : -\t";
    cin >> name;
    cout << "Enter A/c No : -\t";
    cin >> acno;
    cout << "Enter A/c type : -\t";
    cin >> accountType;
    cout << "Enter Account opening balance : -\t";
    cin >> bal;
}

void Bank ::deposit()
{
    int deposit = 0;
    cout << "Enter Deposit amount : -\t";
    cin >> deposit;
    bal = bal + deposit;
    cout << "\n Deposit balance = \t" << bal;
}

void Bank ::withdraw()
{
    int withdraw;
    cout << "\n Balance Amount = \t\t" << bal;
    cout << "\n Enter Withdraw Amount :-\t";
    cin >> withdraw;
    if (bal >= withdraw)
    {
        bal = bal - withdraw;
        cout << "\n After withdraw Balance is = \t" << bal;
    }
    else
    {
        cout << "\n \t Not Enough Balance";
    }
}

void Bank ::display()
{
    cout << endl
         << endl
         << endl;
    cout << setw(50) << "DETAILS" << endl;
    cout << setw(50) << "Name : " << name << endl;
    cout << setw(50) << "Account No : " << acno << endl;
    cout << setw(50) << "Account Type : " << accountType << endl;
    cout << setw(50) << "Balance : " << bal << endl;
};
int main()
{
    Bank o1;
    int choice;

    do
    {
        cout << "\n\n\n \t Banking System Program";
        cout << "\n\n Choice List \n";
        cout << "1. To assign Initial Value \n";
        cout << "2. To deposit \n";
        cout << "3. To withdraw \n";
        cout << "4. To Display All Details \n";
        cout << "5. Exit \n";
        cout << "Enter your choice : \t";
        cin >> choice;
        switch (choice)
        {
        case 1:
            o1.opbal();
            break;
        case 2:
            o1.deposit();
            break;
        case 3:
            o1.withdraw();
            break;
        case 4:
            o1.display();
            break;
        case 5:
            goto end;
        default:
            break;
        }
    } while (1);
end:
    return 0;
}