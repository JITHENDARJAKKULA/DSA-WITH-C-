// insertion of element at any position
#include <iostream>
using namespace std;
    void insert(int arr[],int key,int pos,int n){
    for(int i=n-1;i>=pos;i--)  //for for taversing from position
        arr[i+1]=arr[i]; //next =previous element
          arr[pos]=key;  //intializing the key value
    }
int main() {
   int arr[10]={23,45,65,6,5,65};
   int n=7;
      cout<<"before insertion:\n";
      for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";}cout<<endl;
      int key=90,pos=1;
     insert( arr,key, pos,n);
       n++;
        
         cout<<"Afterinsertion:\n";
      for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";}cout<<endl;
      

    return 0;
}