#include<iostream>

using namespace std;

	class students{
		public:
			
			string name;
			int rollno;
			float fee;
			
			void data(){
				cout<<"My self , my name is "<<name<<" My "<<rollno <<"is"<<"total fees is "<<fee;
			}
	};
	
	int main(){
		
		students s1,s2;
		
		s1.name = "Shushant";
		s1.rollno = 345;
		s1.fee = 435345.4;
		
		s1.data();
		
		cout <<endl<<"*******************************************"<<endl;
		
		s2.name = "amar";
		s2.rollno = 244;
		s2.fee = 4353655.4;
		
		s2.data();
	
		
	}
