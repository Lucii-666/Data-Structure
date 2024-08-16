// check is the array is sorted 

#include <iostream>
using namespace std;
int main(){
    int arr[]= {1,2,3,4,5,6,7,8,9};
    int n= sizeof arr / sizeof arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]< arr[i-1]){
            cout<<"array is shorted";
            return 0;
        }
    }
    cout<<"array is not sorted";
    return 0;
}