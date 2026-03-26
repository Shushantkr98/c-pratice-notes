#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	char s1[20] = "hello";
	char s2[] = "world";
	
	strcat(s1,s2);
	
	cout<<s1<<endl;
	cout<<"length :"<<strlen(s1);
}
