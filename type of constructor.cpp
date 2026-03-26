#include<iostream>
  
  using namespace std;
   
   class man{
     
     public:
       
       string name;
       int age;
       
//       default const

    man(){
      name = "unknown";
      age = 0;
      
      cout<<"this is my "<<name<<endl;
    }
    
//    personalized const

    man(string n,int a){
      name = n;
      age = a;
      cout<<"this is my "<<name<<age<<endl;
    }
    
//    copy const

    man(man &m){
      name = m.name;
      age = m.age;
      cout<<"this is my "<<name<<age <<endl;
    }
  };
  
  int main(){
    
    man m1;
    man m2("atul",70);
    man m3 = m2;
  }
