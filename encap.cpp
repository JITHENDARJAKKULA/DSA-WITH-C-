#include<iostream>
using namespace std;
 class jith{
    private: //hiding data from users
    int salary;
   
      
    public://to access the private attribute use public
     void setsalary( int s){ //set is used to set the attribute
        salary=s;}
        
        int  getsalary(){ // to get the attribute variable using get
         return salary;
         }
         };
          int main(){
           jith myobj;
            myobj.setsalary(40000);
            cout<<myobj.getsalary();
            return 0;
            }