#include<iostream>

using namespace std;
template <class T>
class box{
	T value;
	public:
		box(T v) : value(v){}
		T getValue(){
			return value;
		}
};

int main(){
	box<int> intbox(123);
	box<double> doublebox(45.67);
	cout<< intbox.getValue()<<endl;
	cout<< doublebox.getValue()<<endl;
	return 0;
}
