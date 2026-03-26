#include<iostream>

using namespace std;

class shape {
	
	public:
		virtual void draw () = 0;
		
};


class rectangle : public shape {
	
	public:
		
		void draw (){
			cout<<"this is rectanle"<<endl;
		}
};

class circle : public shape {
	
	public:
		
		void draw (){
			cout<<"this is circle"<<endl;
		}
};

	int main(){
		
		shape *s;
		
		rectangle r;
		
		circle c;
		
		s = &r;
		
		s->draw();
		
		s = &c;
		
		s->draw();
	}
