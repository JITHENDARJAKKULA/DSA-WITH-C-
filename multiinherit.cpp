/*#include <iostream>
using namespace std;

// Parent class
class MyClass {
  public: 
    void myFunction() {
      cout << "asthi 2 acres esthunna." ;
    }
};

// Child class
class MyChild: public MyClass {
};

// Grandchild class 
class MyGrandChild: public MyChild {
};

int main() {
  MyGrandChild myObj;
  myObj.myFunction();
  return 0;
} */
#include<iostream>
using namespace std;
  class tatha{ //grandparent class
  public:
  void function(){
  cout << "asthi 2 acres esthuna kodka";
  }
  };
   //daddy class
   class daddy:public tatha{
   };
   //nenu class
    class nenu:public tatha{
    };
    int main(){
    nenu objc;
    objc.function();
    return 0;
    }
  
