#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class Account //Entity형 클래스
{
private:
    int id;
    char *name;
    int money;

public:
    Account(int accId, int balance, char *cusname);
    Account(const Account &ac);
    virtual void deposit(int plus);
    int GetAccId(void) const;
    int GetBalance();
    int withdraw(int minus);
    void ShowAll(void) const;
    ~Account();
};

#endif