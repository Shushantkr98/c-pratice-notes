#include<iostream>

using namespace std;

	class Counter {
		public:
			
			static int count;
			int x;
			static int y;
			
			Counter(){ count++;}
			
			static void showcount(){ 
			cout << count << y<< endl;
			
			}
	};
	
	int Counter::count = 0;
	int Counter::y = 90;
	Counter a, b;
	
	int main(){
		Counter::showcount();
		return 0;
	}
