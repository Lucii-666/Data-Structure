#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 4, 2, 5, 3, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int largest, slargest;
    largest = slargest = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        }else if(arr[i] > slargest && arr[i] != largest) {
            slargest = arr[i];
        }
    }
    if(slargest == 0){
        cout << "There is no second largest element." << endl;
    }else{
        cout << "The second largest element is: " << slargest << endl;
    }
    return 0;
}
