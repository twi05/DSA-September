#include <iostream>
using namespace std;

int BinarySearch(int *arr, int target, int s, int e)
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
int findAns(int *arr, int target)
{
     int s = 0;
    int e = 1;
    int size =2;
    //Size  =  (e-s+1)*2
    while (s <= e)
    {

        if (arr[e] >= target)
        {
           return BinarySearch(arr, target, s, e);
        }
        else
        {
            int s = e+1;
            e = size*2 + s; 
        }
    }
    return -1;
}

int main()

{
    int arr[] = {5, 6, 7, 8, 9, 10, 12, 15};

    int target = 12;
    // int n = sizeof(arr) / sizeof(arr[0]);
    cout << findAns(arr, target);
    return 0;
}