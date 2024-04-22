// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int search(int arr[],int key,int n){
    for(int i=0;i<n;i++)
    if(arr[i]==key)
      return i;   
        return -1;
}
     
int main() {
    int arr[ ]={45,67,45,34,56};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=56;
     int p=search(arr,key,n);
     if(p==-1){
         cout<<"element is not  found"<<endl;
     }else
     cout<<"element is  found at index:"<<p;
    
     
    return 0;
}