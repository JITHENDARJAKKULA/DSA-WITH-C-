
#include<iostream>
#include<math.h>
#include<time.h>
using namespace std;
int game(char you,computer){
//function to implement game
if (you==computer) //if both comp and user choose same
  return -1;
  
  if(you=='s' && computer=='p')
  return 0;
  
   else if( you=='p' && computer=='s')
   return 1;
   
   if(you=='s' && computer=='z')
   return 1;
 
   
 
  else if(you=='z' &&computer=='s')
   return 0;
  
   if(you=='p' &&computer=='z')
   return 0;
   
    else if(you=='z' &&computer=='p')
    return 1;
}
    
    int main(){
    int n;//stores random num
    char you,computer,result;
    
    srand(time(NULL));
     n=rand()%100;
      if(n<33){
      computer='s';}
      
      else if(n>33 && n<66){
      computer='p';}
      
      else{
      computer='z';}
      cout <<" Enter s for stone,p for paper and z for scissor";
      cin >> you;
      result=game(you,computer);
       if (result==-1){
       cout <<"Game draw\n";}

    else if(result ==1){
   cout<< "you have lost the game\n";
   }
   else{
   cout << "cong you woon game";}
   return 0;
    }
   

