#ifndef __ACCOUNTHANDLER_H__
#define __ACCOUNTHANDLER_H__

#include "Account.h"

class AccountHandler
{
private:
    Account *AccArr[100];
    int accnum;

public:
    AccountHandler()
        : accnum(0)
    {
    }
    void showmenu(void) const;
    void newAccount(void);
    void newNormal(void);
    void newHigh(void);
    void withdraw(void);
    void showall(void) const;
    void deposit(void);
};

#endif