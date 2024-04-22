
#include<iostream>
#include<string>
using namespace std;
  class thandri{ //grandparent class
  public:
  void vamsham(){
  cout << "jakkula";
  }
  };
   //daddy class
   class kodku:public thandri{
    
   };
   

    int main(){
    kodku objc;
    objc.vamsham();
    return 0;
    }
  
