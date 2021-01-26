#include "Account.h"
#include "BankingCommonDec1.h"
#include "NormalAccount.h"
#include "HighCreditAccount.h"
#include "AccountHandler.h"

void AccountHandler::showmenu(void) const
{
    cout << "-------Menu-------\n";
    cout << "1. Make new Account\n";
    cout << "2. Deposit to your Account\n";
    cout << "3. Withdraw your money\n";
    cout << "4. Show all Accounts in this program\n";
    cout << "5. Exit Program\n"
         << endl;
}

void AccountHandler::newAccount(void)
{
    int choice;
    cout << "------Make new Account------\n";
    cout << "[Choose Account Type]\n1. Normal  2.HighCredit\nChoice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        newNormal();
        break;
    case 2:
        newHigh();
        break;
    default:
        cout << "Invalid Choice\nReturn to Main\n";
        break;
    }
}

void AccountHandler::newNormal(void)
{
    int accId;
    char name[NAME_LEN];
    int money;
    int interest;

    cout << "------Make new Account------\n[Normal Account]\n";
    cout << "Accunt ID : ";
    cin >> accId;
    cout << "Name : ";
    cin >> name;
    cout << "Deposit Money : ";
    cin >> money;
    cout << "Interest : ";
    cin >> interest;
    cout << endl;
    AccArr[accnum] = new NormalAccount(accId, money, name, interest);
    accnum++;
}

void AccountHandler::newHigh(void)
{
    int accId;
    char name[NAME_LEN];
    int money;
    int interest;
    int rate;

    cout << "------Make new Account------\n[Normal Account]\n";
    cout << "Accunt ID : ";
    cin >> accId;
    cout << "Name : ";
    cin >> name;
    cout << "Deposit Money : ";
    cin >> money;
    cout << "Interest : ";
    cin >> interest;
    cout << "Credit Rate (1 to A, 2 to B, 3 to C) : ";
    cin >> rate;
    cout << endl;
    AccArr[accnum] = new HighCreditAccount(accId, money, name, interest, rate);
    accnum++;
}

void AccountHandler::deposit(void)
{
    int Id, money;
    cout << "-----Deposit to your Account-----\n\n";
    cout << "Account ID : ";
    cin >> Id;
    for (int i = 0; i < accnum; i++)
    {
        if (AccArr[i]->GetAccId() == Id)
        {
            int balance;
            cout << "How much : ";
            cin >> money;
            AccArr[i]->deposit(money);
            balance = AccArr[i]->GetBalance();
            cout << "The current balance is " << balance << "\n"
                 << endl;
            return;
        }
    }
    cout << "\nInvalid Account Id\nReturn to Main\n"
         << endl;
}

void AccountHandler::withdraw(void)
{
    int Id, money;
    cout << "-----Withdraw from Account-----\n";
    cout << "Account ID : ";
    cin >> Id;
    for (int i = 0; i < accnum; i++)
    {
        if (AccArr[i]->GetAccId() == Id)
        {
            int balance;
            cout << "How much : ";
            cin >> money;
            balance = AccArr[i]->withdraw(money);
            if (balance == -1)
            {
                cout << "Your balace is not enough to withdraw " << money << endl;
                cout << "return to main\n"
                     << endl;
                return;
            }
            else
            {
                cout << "Current Balance is : " << balance << endl
                     << endl;
                return;
            }
        }
    }
    cout << "\nInvalid Account ID\nReturn to Main\n"
         << endl;
}

void AccountHandler::showall(void) const
{
    for (int i = 0; i < accnum; i++)
    {
        cout << "Account " << i + 1 << "\n";
        AccArr[i]->ShowAll();
    }
}