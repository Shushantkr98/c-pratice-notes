#include<iostream>

	using namespace std;
	int divide (int a,int b){
		if ( b == 0){
			throw "division by zero error!";
		}
		return a / b;
	}
	int main(){
		int x,y;
		cout<<"enter the value of x :"<<endl;
		cin>>x;
		cout<<"enter the value of y :"<<endl;
		cin>>y;
		
		try{
			int result = divide(x,y);
			cout << "Result: " << result << endl;
		} catch (const char* msg){
			cerr << "Error:" << msg << endl;
		}
	}
