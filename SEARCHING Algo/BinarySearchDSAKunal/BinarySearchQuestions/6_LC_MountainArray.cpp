#include <iostream>
using namespace std;

int maxMountain(int arr[], int len)
{

    int s = 0;
    int e = len - 1;

    while (s <= e)
    {
        int mid = s - (s - e) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return arr[mid];
        }

        else if (arr[mid] > arr[mid + 1])
        {
            e = mid-1 ;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
            cout << "something is wrong";
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 5, 6,50,100,5465465, 1124,540, 3, 2,};

    // int targset = 70;
    int n = sizeof(arr) / sizeof(arr[0]);

    // cout << startIndex(arr, target,n, true)<<endl;
    // cout << startIndex(arr, target, n, false);
    cout << maxMountain(arr, n);
    // cout<< "{"<< startIndex(arr, target,n, true)<<","<<startIndex(arr, target, n, false)<<"}";
    return 0;
}