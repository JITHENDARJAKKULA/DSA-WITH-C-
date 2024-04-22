#include<iostream>
using namespace std;
int main(){
char op;
float x,y;
cout << "enter the operator: +,-,*,/:";
cin >> op;

cout << "enter two operands:";
cin >> x >> y;
 
 switch(op){
 case '+':
 cout << x <<"+"<< y <<"=" << x+y;
 break;
 case '-':
cout << x <<"-"<< y <<"=" << x-y;
 break;
 case '*':
 cout << x <<"*"<< y <<"=" << x*y;
 break;
 case '/':
 cout << x <<"/"<< y <<"=" << x/y;
 break;
  default: 
  // If the operator is other than  +,-,*,/; error message is shown
  cout <<"!Error invalid operator............";}
  return 0;}
 
