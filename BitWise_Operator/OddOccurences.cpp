#include <iostream>
using namespace std;

int OddOcc(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans ^= arr[i];
    }
    return ans;
}

int main()
{

    int arr[] = {10, 2, 3, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << OddOcc(arr, size);

    return 0;
}