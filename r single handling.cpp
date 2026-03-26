#include<fstream>
#include<iostream>

	using namespace std;
	
	int main(){
		ofstream myFile("shushant.txt");
		if (myFile.is_open()){
			int x = 10;
			double y = 20;
			
			
			myFile << x << y;
			myFile.close();
		}
		}
	
