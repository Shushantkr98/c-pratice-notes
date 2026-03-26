#include<iostream>

using namespace std;


	class Box {
		int width;
		public:
			Box(int w) : width(w) {}
				friend void printWidth(Box b);
	};
		void printWidth(Box b){
		cout << b.width<< endl;
	}

	int main(){
		
		Box b1(45);
		
		printWidth(b1);
		
	}
		
		
	
