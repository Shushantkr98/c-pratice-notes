#include<iostream>

using namespace std;

class MyClass{
	public:
		int value;
		void show (){
			cout<<"value :"<< value << endl;
		}
};

int main(){
	MyClass obj;
	obj.value = 42;
	
	int MyClass::*ptrvalue = &MyClass::value;
	obj.*ptrvalue = 100;
	cout<< obj.value << endl;
	
	void (MyClass::*ptrshow)() = &MyClass::show;
	(obj.*ptrshow)();
	
	MyClass* pobj = &obj;
	pobj->*ptrvalue = 200;
	(pobj->*ptrshow)();
	
	return 0;
}
