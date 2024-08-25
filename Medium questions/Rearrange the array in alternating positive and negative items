// Rearrange the array in alternating positive and negative items
#include <iostream>
using namespace std;

int main() {
  int n = 6;
  int A[] = {1, 2, -4, -5, 3, 4};

  int pos = 0;
  int neg = n - 1;
  while (pos < neg) {
    if (A[pos] < 0 && A[neg] >= 0) {
      swap(A[pos], A[neg]);
      pos++;
      neg--;
    } else {
      if (A[pos] >= 0) {
        pos++;
      }
      if (A[neg] < 0) {
        neg--;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << A[i] << " ";
  }
  cout << endl;

  return 0;
}
