// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int search(int arr[],int key,int l,int h){
    while(l<=h){
    int m=l+(h-l)/2;
    if (arr[m]==key)
    return m;
     if (arr[m]<key)
     l=m+1;
     else
     h=m-1;}
        return -1;
}
     
int main() {
    int arr[ ]={45,46,47,48,49};
   int n=sizeof(arr)/sizeof(arr[0]);
    int key=45;
     int p=search(arr,key,0,n-1);
     (p==-1)?
         cout<<"element is not  found"<<endl:
         
     
     cout<<"element is  found at index:"<<p;
     
    
     
    return 0;
}