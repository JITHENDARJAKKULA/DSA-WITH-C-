#include<iostream>
using namespace std;
int main(){
   // int n=7;
    int arr[ ]={67,34,23,45,77,88};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                
            }
        }
    }
           for(int i=0;i<n;i++){
               cout<<arr[i]<<endl;
           }
            return 0;}