#include<iostream>

using namespace std;

	class dog{
		
		public:
			string name = "rishab";
	}; 
	
	class pet : protected dog {
		
		public:
			
			string quality = "toy";
			
	};
	
	class animal : public pet{
		public:
			
			string spicies = "tiger";
	};
	
	int main(){
		
		dog d1;
		pet p1;
		animal a1;
		
		cout<<d1.name<<" and "<<p1.name<<" and "<< a1.quality ;
		
	}
	
	
