#include <iostream>

using namespace std;

class Account{
	
	protected:
		int balance = 1000;
		int debit = 1000;
		
	public:
		void payment1(int w);
		int payment(int money);
		int getBalance();
		int payoff(int money);
		int payment2(int money);
		int getdebit();
		
		//void getBalance();
		//void setBalance(int sBalance);
};
/*void Account::setBalance(int sBalance){
	balance = sBalance;
};*/

Account::getdebit(){
	return debit;
}
Account::payoff(int money){
	if(money <=0){
		return 0;
	}
	balance+=money;
	return money;
}
Account::payment(int money){
	if(money > balance or money<=0){
		return 0;
	}
	
	balance-=money;
	return money;		
};

Account::payment2(int money){
	if(money > balance){
		debit+=(money-balance);
		balance=money-debit;
		return balance;
	}
	
	balance-=money;
	return money;
}

void Account::payment1(int w){
	if(w>balance or w<=0){
		cout<<"Operacja niemo¿liwa"<<endl;
	}
	
	else{
		balance-=w;
	}
};
Account::getBalance(){
	cout<<balance<<endl;
	return balance;
};

/*void Account::getBalance(){
	cout<<"Stan konta: "<<balance;
};*/

int main(){
	setlocale(LC_CTYPE,"polish");
	Account konto1;
	
	cout<<konto1.payment2(2000)<<endl;
	cout<<konto1.getdebit()<<endl;
	konto1.getBalance();
	return 0;
}
