#include<iostream>

using namespace std;

int even(int n){
	
	if ( n > 10)return 1;
	else return n * even(n + 2);
}
int main(){
	int num = 2;
	cout<<"even no is  "<<num<< endl;
	cout<<" than  "<< num <<even(num)<<endl;
	
	return 0;
}

