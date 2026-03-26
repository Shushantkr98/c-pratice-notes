#include<fstream>
#include<iostream>
#include<string>

	using namespace std;
	
	int main(){
		ifstream src("source.txt");
		ofstream dest("dest.txt");
		string line;
		if (src.is_open() && dest.is_open()){
			while (getline(src,line)){
				dest << line <<endl;
			}
			src.close();
			dest.close();
		}
	}
