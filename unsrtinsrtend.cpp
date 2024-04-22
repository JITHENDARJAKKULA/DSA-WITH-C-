// insertion of element at any position
#include <iostream>
using namespace std;
   int  insert(int arr[],int key,int capacity,int n){
    if(n>=capacity)
       return 0;
       arr[n]=key;
       return n+1;
    
    }
int main() {
   int arr[10]={23,45,65,6,5,65};
   int n=6;
      cout<<"before insertion:\n";
      for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";}cout<<endl;
        int key=100;
        int capacity=sizeof(arr)/sizeof(arr[0]);
     n=insert( arr,key, capacity,n);
     cout<<"Afterinsertion:\n";
      for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";}cout<<endl;
      

    return 0;
}