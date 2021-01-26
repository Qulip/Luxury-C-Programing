Account.o : Account.h Account.cpp
	g++ -c Account.cpp

AccountHandler.o : AccountHandler.h AccountHandler.cpp
	g++ -c AccountHandler.cpp

BankingSystemMain.o : BankingSystemMain.cpp Account.h AccountHandler.h BankingCommonDec1.h HighCreditAccount.h NormalAccount.h
	g++ -c BankingSystemMain.cpp

Proj07 : Account.o AccountHandler.o BankingSystemMain.o
	g++ Account.o AccountHandler.o BankingSystemMain.o -o Proj07
	rm -f *.o
	rm -f $(TARGET)

clean:
	rm -f *.o
	rm -f $(TARGET)