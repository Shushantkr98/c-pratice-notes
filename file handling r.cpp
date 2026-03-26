#include<fstream>
#include<iostream>
#include<string>

	using namespace std;
	
	int main(){
		
		ifstream myFile("example.txt");
		string line;
		if (myFile.is_open()){
			while (getline(myFile, line)){
				cout<<line<<endl;
				
			}
			myFile.close();
		}else {
		cout << "Unable to open file";
		}
		return 0;
	}
