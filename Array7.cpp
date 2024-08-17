// move all zeroes to end 

#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,0,5,0,0,8};
    int size= sizeof(arr)/sizeof(arr[0]);
    if(size==0 || size ==1){
        cout<<"Size of array is 0 or 1"<<endl;
    }
    int nz=0,z=0;
    while(z<size){
        if(arr[z]!=0){
            int temp=arr[nz];
            arr[nz]=arr[z];
            arr[z]=temp;
            nz++;
        }
        z++;
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}