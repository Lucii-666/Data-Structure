// Find the missing number in an array.

#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,7};
    int maxi=0;
    int cnt=0;
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0;
        }
        cout<<maxi;
    }
}
