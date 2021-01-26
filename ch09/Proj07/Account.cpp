#include "Account.h"
#include "BankingCommonDec1.h"

Account::Account(int accId, int balance, char *cusname)
    : id(accId), money(balance)
{
    name = new char(strlen(cusname) + 1);
    strcpy(name, cusname);
}

Account::Account(const Account &ac)
    : id(ac.id), money(ac.money)
{
    name = new char(strlen(ac.name) + 1);
    strcpy(name, ac.name);
}

void Account::deposit(int plus)
{
    money += plus;
}

int Account::GetAccId(void) const
{
    return id;
}

int Account::GetBalance()
{
    return money;
}

int Account::withdraw(int minus)
{
    if (money < minus)
    {
        return -1;
    }
    else if (money == minus)
    {
        money = 0;
        return 0;
    }
    else
    {
        money -= minus;
        return money;
    }
}

void Account::ShowAll(void) const
{
    cout << "Account ID : " << id << endl;
    cout << "Account Name : " << name << endl;
    cout << "Account Balance : " << money << endl
         << endl;
}

Account::~Account()
{
    delete[] name;
}