#include <iostream>
using namespace std;

int searchRotated(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (mid < e && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] < arr[mid - 1])
        {
            return mid - 1;
        }
        else if (arr[s] <= arr[mid])
        {
            s = mid + 1;
        }
        else{
            e = mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2455 ,0, 2, 3,4, 5, 6,55};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<searchRotated(arr, n);
    return 0;
}