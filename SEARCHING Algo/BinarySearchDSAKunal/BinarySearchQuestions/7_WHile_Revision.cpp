#include <iostream>
using namespace std;

int OrderAgnosticbinarySearch(int *arr, int n,int target , int s, int e)
{

    bool isAscending;
    isAscending = (arr[s] - arr[e]) < 0;
    cout<<"Isacending value"<<isAscending<<endl;

    while (s <= e)
    {

        int mid = s - (s - e) / 2;

        if (arr[mid] < target)
        {
            isAscending ? s = mid + 1 : e = mid - 1;
        }
        else if (arr[mid] > target)
        {
            isAscending ? e = mid - 1 : s = mid + 1;
        }

        else
        {
            return mid;
        }
        // else{
        //     cout<<"Something went Wrong";
        // }
    }

    return -1;
}

int peakIndex(int *arr, int len)
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

        else if (arr[mid] < arr[mid - 1])
        {
            e = mid - 1;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
    }
    return -1;
}

int ans(int *arr, int n, int target)
{
    int ans=-1;
    int peak = peakIndex(arr, n);
    cout << "Peak element of MOuntain Array is:"<< peak<< endl;
    ans = OrderAgnosticbinarySearch(arr, n, target, 0, peak);
    if ((ans) != -1)
    {    
            cout<<ans<<"Ans is this"<<endl;
        return ans;
    }
    else
    {
        return OrderAgnosticbinarySearch(arr, n, target, peak + 1, n - 1);
    }
    return ans;
}

int main()
{

    int arr[] = {1, 2,3, 10, 20, 6, 3, 2, 1};
    int target = 20;
    int n = sizeof(arr) / sizeof(arr[0]);
cout<<ans(arr, n,target);
    // binarySearch(arr, target, peakElement)==-1?

    return 0;
}