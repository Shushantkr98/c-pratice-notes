#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	char str[100];
	cout<<"enter the string";
	
	fgets(str, sizeof(str), stdin);
	 int len = strlen(str);
	 
	 if (str[len - 1] == '\n') str[len - 1] = '\0';
	len = strlen(str);
	
	cout<<"reversed :";
	 for (int i = len - 1; i >= 0; i--){
	 	cout<<str[i];
	 }
}
	 
	
	 


