// left rotate by D place

#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int r=3;
    int temp1;
    for(int i=0;i<r;i++){
         temp1=arr[0];
        for(int j=0;j<n;j++){
        arr[j]=arr[j+1];
        }
        arr[n-1]=temp1;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
}

