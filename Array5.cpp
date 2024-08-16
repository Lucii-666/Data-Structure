// left rotate by one place

#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp1=arr[0];
    
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp1;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
}

