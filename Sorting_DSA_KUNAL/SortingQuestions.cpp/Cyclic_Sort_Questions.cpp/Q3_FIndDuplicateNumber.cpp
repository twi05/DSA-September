#include <iostream>
using namespace std;
void swap(int *arr, int j, int k)
{
    int temp = arr[j];
    arr[j] = arr[k];
    arr[k] = temp;
}

int function(int *arr, int n)
{
    int i = 0, index;
    while (i <= n)
    {
        index = arr[i] - 1;
        if (arr[index] != index + 1)
        {
            if (arr[index] == arr[i])
            {
                return arr[i];
            }
            else
            {
                swap(arr, i, index);
            }
        }
        else
            i++;
    }
    // for (int i = 0; i <= n; i++)
    // {
    //     if (arr[i] != i+1)
    //     cout << arr[i] << "\t";
    // }
    return -1;
}

int main()
{
    int arr[] = {1, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
   cout<< function(arr, n);
    //     int sum =0;
    //      for (int i = 0; i <= n; i++)
    //     {
    //         sum += arr[i];
    //     }
    //    cout<<sum-(n)*(n+1)/2  ;
    return 0;
}