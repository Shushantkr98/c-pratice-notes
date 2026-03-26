#include<iostream>

using namespace std;

	class number{
		public:
			
				int n;
				int i = 1;
				
				
		void data(){
			while (i<=10){
				cout<<2<<"x"<< i<<"="<< 2*i << endl;
		i++;
	}
}

   void primeprinter(){
   	
 int prime = 1;
  while(prime <= 100){
    
  int flag = 1;
  int i = 2;
  while(i<prime){
    if(prime%i == 0){
      flag = 0;
      break;
    }
    i++;
  }
 
  if(flag == 1){
    printf("%d \t",prime);
    cout<<prime<<"\t";
  }
  prime++;
  }

   }

	};
	
	
	
	int main(){
		
		number s1;
		
		
		
		cout <<"value of n"<<endl;
		cin>>s1.n;
		
		s1.data();
		
		cout <<endl;
		
		if (s1.n%2 == 0){
			cout<<"even number"<<endl;
		}else if (s1.n%2 == 1){
			cout<<"odd number"<<endl;
		}
		
		s1.primeprinter();
		
		}
