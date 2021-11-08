#include <iostream>
using namespace std;
void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int low = i;
        for (int j = i; j <= n ; j++)
        {
            if (arr[j] < arr[low])
            {
                low = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[low];
        arr[low] = temp;
    }
}
int main()
{
    int arr[] = {4,5,0,5,0,6,6,0,226,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionsort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}