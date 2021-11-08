#include <iostream>
using namespace std;
int maxMountain(int arr[], int target, int len)
{

    int s = 0;
    int e = len - 1;

    while (s <= e)
    {
        int mid = s - (s - e) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }

        else if (arr[mid] == target)
        {
            e = mid;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        // else
        // cout << "something is wrong";
    }
    return -1;
}

int leastIndex(int arr[], int target, int max)
{
     int s, e, mid;
    s = 0;
    e = max;
    while (s <= e)
    {
         mid = (s + e) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else
            s = mid+1;
    }
    return leastIndex( arr,  target,  e);
}
int main()
{
    int arr[] = {1,3,10,20,6,3,2,1};
    int target = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
 int maxelementIndex = maxMountain(arr, target, n);
    cout <<maxelementIndex<<endl;
    cout << leastIndex(arr, target, maxelementIndex);
    return 0;
}