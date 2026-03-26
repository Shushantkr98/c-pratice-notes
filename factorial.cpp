#include<iostream>

	using namespace std;
	
	class factor{
		public:
			
	 int factorial(int n){
			
			if ( n == 0)return 1;
			else return n * factorial(n - 1);
}
	};
	
	int main(){
		
	factor s1;
	int num;
	cout<<"this is no "<<endl;
	cin>>num;
	
	cout<<"factorial of "<<num<<" is " <<s1.factorial(num);
	
	return 0;
		
}
			

