#include<iostream>

using namespace std;

	class dog{
		
		public:
			string name = "rishab";
	}; 
	
	class pet : public dog {
		
		public:
			
			string quality = "toy";
			
	};
	
	class animal{
		public:
			
			string spicies = "tiger";
	};
	
	class food : public pet , public animal{
		public:
			
			string product = " Momos";
	};
	
	int main(){
		
		dog d1;
		pet p1;
		animal a1;
		food f1;
		
		cout<<d1.name<<" and "<<p1.quality<<" and "<< a1.spicies<<" and "<<f1.product ;
		
	}
	
	
