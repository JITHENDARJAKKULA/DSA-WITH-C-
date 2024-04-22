#include<iostream>
using namespace std;
class jith{
    private:
    int salary;
    public:
    void setsalary(int s){
        salary=s;
    }
  int getsalary(){
        return salary;
  }
    };
int main(){
    jith obj;
    obj.setsalary(50000);
    cout<<obj.getsalary();
    return 0;
}