#include<iostream>

using namespace std;

 class BankAccount {
 	private:
 		double balance;
 		
 		public:
 			void deposit(double amount) {
 				if (amount > 0){
 					balance += amount;
				 }
			 }
			 
			 double getbalance(){
			 	return balance;
			 }
 };
	
	int main(){
		
		BankAccount acc;   

    acc.deposit(500);       
	   

    cout << "Current Balance: " << acc.getbalance() << endl;

    return 0;
}
	

