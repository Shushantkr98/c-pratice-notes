#include<iostream>

using namespace std;

	class motor{
		
		public:
			string brand = "tata";
	}; 
	
	class car: protected motor{
		public:
			string model = "bugati";
			
			void showbrand(){
				cout<<brand;
			}
			
			
	};
	
	int main(){
		
		motor m1;
		car c1;
		c1.showbrand();
		
		cout<<" and "; 
		cout<<c1.model;
	}
