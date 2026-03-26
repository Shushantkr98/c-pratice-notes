#include<fstream>
#include<iostream>


	using namespace std;
	int main(){
		
		ofstream myFile("sushant.txt");
		
		if (myFile.is_open()){
			myFile << 123 << " " << 3.14 << endl;
			myFile.close();
		} 
	}
