#include<iostream>
using namespace std;
int main(){
   // int n=7;
    int arr[ ]={67,34,23,45,77,88};
    int n=sizeof(arr)/sizeof(arr[0]);
    int counter=0;
    while(counter<n){
    for(int i=0;i<n-counter;i++){
       
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                
            }
        }  counter++;
    }
           for(int i=0;i<n;i++){
               cout<<arr[i]<<endl;
           }
            return 0;}