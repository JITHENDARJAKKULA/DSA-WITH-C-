#include<iostream>
using namespace std;
 class mainattha{
 public:
 void myfunction(){
  cout << "jith is my allud";
  }
  };
   class atthamma{
   public:
   void my2function(){
   cout<< "jith is also my allud";
   }
   };
   class nenu:public mainattha,public atthamma{
        };
        int main(){
        nenu myobj;
        myobj.myfunction();;
        myobj.my2function();
        return 0;}