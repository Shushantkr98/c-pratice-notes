#include<iostream>

using namespace std;

class complex {
	public:
	
	int real, img;
	complex (int r, int i) : real (r), img(i) {
		cout << real << " + " << img << "i" << endl;
	}
	complex operator+(const complex& c){
		return complex (real + c.real, img + c.img);
		
	}
};

int main(){
	complex c1(1,2), c2(3,4);
	complex c3 = c1 + c2;
	c1.operator+(c2);
}
