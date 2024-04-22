// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
  class jith{  //class name
      public:  //accessing publiclly
      int x;
      void mymethod(); //function declartion for uotside
      
  };
  void jith::mymethod(){   ///function outside the class followed by classname::funtcion
      cout<<"fgfg";
  }
  
int main() {
  jith bus;     //obj creation
  bus.x=90;      //accessing variables
  cout<<bus.x<<endl;   //printing output
   bus.mymethod();    //calling functons
  return 0;
}