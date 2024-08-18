// sorted array serach

#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5,};
    int n = sizeof(arr)/sizeof(arr[0]);
    int t = 3;
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            return i;
        }else{
        return -1;
         }
    }

}