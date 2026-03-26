#include<iostream>
	using namespace std;
	template <class T>
	T getMax(T a, T b) {
		return (a > b) ? a : b;
	}
	int main(){
		cout << getMax(10,20) << endl;
		cout<<getMax(5.5,2.3)<<endl;
		cout<<getMax('A','B')<<endl;
		return 0;
	}                                                                                     
