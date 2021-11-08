#include <iostream>
using namespace std;

int findPivot(int *arr, int len)
{
    int s = 0;
    int e = len - 1;
    int mid, ans = -1;

    while (s <= e)
    {
        mid = s - (s - e) / 2;
        if (arr[mid] > arr[mid + 1])
        {
            ans = mid;
            return ans;
        }
        else if (arr[mid] >= arr[s])
        {
            ans = mid;
            s = mid + 1;
        }
        else 
        {
            e = mid - 1;
        }
    }
    return ans;
}

int binarySearch(int *arr, int target, int s, int e)
{

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }

        else
        {
            return mid;
        }
    }
    return -1;
}

int ans(int *arr, int len, int target)
{

    int pivot = findPivot(arr, len);
    
    
    int answer = binarySearch(arr, target, 0, pivot);
    if (answer != -1)
    {      
        return answer;
    }
    else
    {
        return binarySearch(arr, target, pivot+1, len - 1);
    }
    return -1;
}
int main()
{

    int arr[] = {4, 5, 6, 7, 0, 1, 2,3};

    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 17;
    cout << ans(arr, n, target);

    //maxMountain(arr, n);

    return 0;
}