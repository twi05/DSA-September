#include <iostream>
using namespace std;

int startIndex(int arr[], int target, int len, bool findStartIndex)
{
    int ans = -1;
    int s = 0;
    int e = len - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            if (findStartIndex)
                e = mid - 1;

            else
                s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {5, 7, 7, 7, 8, 8, 10};

    int target = 70;
    int n = sizeof(arr) / sizeof(arr[0]);

    // cout << startIndex(arr, target,n, true)<<endl;
    // cout << startIndex(arr, target, n, false);

    cout << "{" << startIndex(arr, target, n, true) << "," << startIndex(arr, target, n, false) << "}";
    return 0;
}