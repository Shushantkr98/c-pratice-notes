#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	vector<int> marks = {23,45};

marks.push_back(67);

	for(int i : marks){
		cout<<i<<endl;
	}
	
}
