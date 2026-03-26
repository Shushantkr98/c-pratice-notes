#include<fstream>
#include<iostream>
	using namespace std;
	
	int main(){
		ofstream myFile("example.txt");
		if (myFile.is_open()){
			myFile <<"hello, file handling in c++\n";
			myFile <<"this is a new line.\n";
			myFile.close();
		}else {
			cout<< "Unable to open file";
			
		}
		
	}
