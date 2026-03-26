#include<iostream>

using namespace std;

class A {
	
//	*_vptr;
	
	public:
		
		void f1 () {
			cout<<"i am f1 from a"<<endl;
		}
		
		virtual void f2 () {
				cout<<"i am f2 from a"<<endl;
		}
		
		virtual void f3 (){
			cout<<"i am f3 from a"<<endl;}
		
		virtual void f4 (){
			cout<<"i am f4 from a"<<endl;}
		
};

class B : public A{ 
	
	public :
		
		void f1() {
		cout<<"i am f1 from b"<<endl;
		}
		
		void f2() {
		cout<<"i am f2 from b"<<endl;}
		
		void f4 (int) {
		cout<<"i am f4 from b"<<endl;}
};

int main(){
	
	 A *p,o1;
	 B b1;
	
	p = &b1;
	
	p->f1();
	
	p->f2();
	
	p->f3();
	
	p->f4();
	}
