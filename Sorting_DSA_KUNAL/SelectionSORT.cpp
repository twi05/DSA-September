#include <iostream>
using namespace std;

int getMaxIndex(int arr[], int start, int last)
{
    int max = start;
    for (int i = start; i <= last; i++)
    {
        if (arr[i] > arr[max])
        {
            max = i;
        }
    }
    return max;
}

void swap(int arr[], int first, int last)
{
    int temp = arr[first];
    arr[first] = arr[last];
    arr[last] = temp;
}
void selectionsort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int last = n - i - 1;
        int maxindex = getMaxIndex(arr, 0, last);
        swap(arr, maxindex, last);
    }
}

int main()
{
    // int arr[] = {5, 4, 0,-50, 1};
    int arr[] = {4, 5, 0, 5, 0, 6, 6, 0, 226, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionsort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}