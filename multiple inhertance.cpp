#include<iostream>

using namespace std;

	class dog{
		
		public:
			string name = "rishab";
	}; 
	
	class pet{
		
		public:
			
			string quality = "toy";
			
	};
	
	class animal : public dog, public pet {
		public:
			
			string spices = "lion";
	
	};
	
	int main(){
		
		dog d1;
		pet p1;
		animal a1;
		
		cout<<d1.name<<" and "<<p1.quality<<" and "<< a1.quality;
		
	}
	
	
