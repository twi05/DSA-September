#include <iostream>
using namespace std;

int ceiling(int arr[], int target, int len)
{
    int s, e;
    s = 0;
    e = len - 1;
    if (target >= arr[e])
    {
        return -1;
    }
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == target)
        {
            return arr[mid + 1];
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return arr[s];
}
int main()
{
    int arr[] = {2, 10, 33, 45, 59, 80};
    int target = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << ceiling(arr, target, n);
    return 0;
}