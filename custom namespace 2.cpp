#include"customnamespace1.h"
 
 namespace MyRahulspace{
    void display(){
        cout << "Inside RahulNamespace" <<endl;
    }
}

	using namespace MyRahulspace;
	int main(){
		display();
		return 0;
	}
