#include<iostream>

using namespace std;

	class Animal {
	public:
		virtual void sound(){
			cout<<"some sound";
		}
	};
	
	class dog : public Animal {
		public:
			void sound() override {
			cout << "wolf";
			}
	};
	
	int main(){
	
	Animal* a = new dog();
	a->sound();
	}
