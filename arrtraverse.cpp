// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
int arr[n];
//int n=sizeof(arr)/sizeof(arr[0]);   when no sizd is given
for(int i=0;i<n;i++){ //array traverse
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
    return 0;
}