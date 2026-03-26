#include<iostream>

using namespace std;

int main(){
	
	int fruit,vegetable,food,dryfruit,discount;
	
	cout<<"enter the fruit"<<endl;
	cin>>fruit;
	
	cout<<"enter the vegetable"<<endl;
	cin>>vegetable;
	
	cout<<"enter the food"<<endl;
	cin>>food;
	
	cout<<"enter the dryfruit"<<endl;
	cin>>dryfruit;
	
	
	int total = fruit+vegetable+food+dryfruit;
	
	cout<<endl;
	
	if (total > 1000){
		
		discount = (total * 10)/ 100;
		
		total -= discount;
		cout<<total<<endl;
		cout<<"you are eligible for discount";
	}
}
