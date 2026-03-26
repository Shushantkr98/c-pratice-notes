#include<iostream>

	using namespace std;
	
	class Addition{
		public:
			
			int a,b;
		void data(){
			cout<<"addition of number a & b "<< a+b ;
		}	
 };
	
	int main(){
		
		Addition s1;
		
		cout <<"value of a"<<endl;
		cin>>s1.a;
		
		cout <<"value is b"<<endl;
		cin>>s1.b;
		
		s1.data();
		
		

			
	}

