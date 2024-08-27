//3-sum problem

#include <iostream>
using namespace std;

void triplet(int n, int arr[])
{
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    cout << "[" << arr[i] << " " << arr[j] << " " << arr[k] << "] ";
                }
            }
        }
    }
    cout << "\n";
}

int main()
{
    int arr[] = { -1, 0, 1, 2, -1, -4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Triplets with sum 0 are: ";
    triplet(n, arr);
    return 0;
}
