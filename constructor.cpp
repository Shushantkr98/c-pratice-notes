#include<iostream>
  
  using namespace std;
   
   class man{
   	
   	public:
   		
   		string name;
   		int age;
   		float fee;
   		
//   		construction

		man (string n, int a, float f){
			name = n;
			age = a;
			fee = f;
			cout<< "my name is "<<name <<endl <<"my age is " <<age <<endl <<"my fee is " <<fee <<endl;
		}
		
//		destructure

		~man(){
			cout<<"this is my all detail " << name <<endl;
		}
   	
   };
   
   int main(){
   	
   	man atul("atul",14,134.5);
   }
