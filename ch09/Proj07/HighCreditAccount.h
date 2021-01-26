#ifndef __HIGHCREDITACCOUNT_H__
#define __HIGHCREDITACCOUNT_H__

#include "Account.h"
#include "NormalAccount.h"

class HighCreditAccount : public NormalAccount
{
private:
    int rate;

public:
    HighCreditAccount(int accId, int balance, char *cusname, int interest, int rate)
        : NormalAccount(accId, balance, cusname, interest), rate(rate)
    {
    }
    virtual void deposit(int plus)
    {
        NormalAccount::deposit(plus);
        Account::deposit((int)plus * (rate / 100.0));
    }
};

#endif