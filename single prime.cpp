#include<iostream>

using namespace std;

int main(){
	
	int prime = 4;
	int flag = 1;
	
	int i = 2;
	
	while (i<prime){
		
		if (prime%i == 0){
			flag = 0;
			break;
		}
		i++;
	}
	
	if (flag == 1){
		cout<<"the given num is prime "<<prime;
	}
	else{
		cout<<"the num is not prime "<<prime;
	}
}
