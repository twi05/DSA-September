#include <iostream>
using namespace std;

int binaryS(int arr[], int target, int s, int e, bool Isacending)
{
    int mid;
    while (s <= e)
    {
        mid = s - (s - e) / 2;

        if(arr[mid]>target){
            Isacending?e = mid-1:s=mid+1;

        }
        else if(arr[mid]<target){
              Isacending? s = mid+1:e = mid-1;
        }
        else
         return mid;
    }
    return -1;
}

int agnosticBS(int arr[], int len, int target)
{

    int e = len - 1;
    int s = 0;
    bool Isascending;
    if (arr[s] <= arr[e])
        Isascending = true;
    else
        Isascending = false;

    return binaryS(arr, target, s, e, Isascending);

}

int main()
{

    // int arr[] = {1,23,66,88,99,200};
    int arr[] = {200,99,88,66,22,4,0};
    int target = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<agnosticBS(arr, n, target);

    return 0;
}