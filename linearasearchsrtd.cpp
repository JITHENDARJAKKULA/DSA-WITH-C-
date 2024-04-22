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
    int arr[ ]={45,46,47,48,49};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=49;
     int p=search(arr,key,n);
     (p==-1)?
         cout<<"element is not  found"<<endl:
         
     
     cout<<"element is  found at index:"<<p;
     
    
     
    return 0;
}