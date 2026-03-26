#include<iostream>

using namespace std;

	class dog{
		
		private:
			string name = "rishab";
			
			string data(){
				return name;
			}
			
			public:
				void showdata (){
					cout<<data();
				}
	}; 
	
	class pet : public dog {
		
		public:
			
			string quality = "toy";
			
	};
	
	class animal : public pet{
		public:
			
			string spicies = "tiger";
	};
	
	int main(){
		
		pet p1;
		animal a1;
		d1.showdata();
		
		cout<<d1.<<" and "<<p1.name<<" and "<< a1.quality ;
		
	}
	
	
