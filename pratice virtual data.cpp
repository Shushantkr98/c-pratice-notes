#include<iostream>

using namespace std;

class Base{
	
	public:
		
		virtual void show() {
			
			cout<< "base show"<<endl;
		}
};

class derived : public Base {
	public:
		
		void show () override {
		cout<<"derived show"<<endl;
		}
};

	int main (){
		
		Base *ptr = new derived();
		ptr->show();
	}
