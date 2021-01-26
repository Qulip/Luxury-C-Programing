#ifndef __NORMALACCOUNT_H__
#define __NORMALACCOUNT_H__

#include "Account.h"

class NormalAccount : public Account
{
private:
    int interest;

public:
    NormalAccount(int accId, int balance, char *cusname, int inter)
        : Account(accId, balance, cusname), interest(inter)
    {
    }
    virtual void deposit(int plus)
    {
        Account::deposit(plus);
        Account::deposit((int)plus * (interest / 100.0));
    }
};

#endif