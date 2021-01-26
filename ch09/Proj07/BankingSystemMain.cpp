#include "Account.h"
#include "BankingCommonDec1.h"
#include "NormalAccount.h"
#include "HighCreditAccount.h"
#include "AccountHandler.h"

int main(void)
{
    int choice;
    AccountHandler manager;

    while (1)
    {
        manager.showmenu();
        cout << "Choice : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            manager.newAccount();
            break;
        case 2:
            manager.deposit();
            break;
        case 3:
            manager.withdraw();
            break;
        case 4:
            manager.showall();
            break;
        case 5:
            cout << "program exit\n"
                 << endl;
            return 0;
        default:
            cout << "Invalid Choice\nChoice Valid number\n\n";
            break;
        }
    }
    return 0;
}