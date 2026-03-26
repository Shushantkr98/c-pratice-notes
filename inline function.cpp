#include<iostream>

using namespace std;
	
	class squ{
		public:
			inline int sqaure(int x){
			return x * x;
		}
	
	};
	int main(){	
	
	squ s1;
	cout<< s1.sqaure(5);
}
