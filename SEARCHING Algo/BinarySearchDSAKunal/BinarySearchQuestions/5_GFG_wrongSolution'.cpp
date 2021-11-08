#include <iostream>
using namespace std;

int position(int arr[], int target)
{
    static int s = 0;
    static int e = 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
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
        int Newstart = e + 1;
        e = e + (e - s + 1) * 2;
        mid = (Newstart + e) / 2;
        cout << "YYYEs\n";
    }
    return mid;
}
int main()

{
    int arr[] = {5, 6, 7, 8, 9, 10,11,12,14,19,20,25,60,68,668};

    int target =8;
    // int n = sizeof(arr) / sizeof(arr[0]);
    cout << position(arr, target);
    return 0;
}