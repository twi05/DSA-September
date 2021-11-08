#include <iostream>
using namespace std;
void swap(int arr[], int j, int k)
{

    int temp = arr[j];
    arr[j] = arr[k];
    arr[k] = temp;
}

void function(int arr[], int n)
{
    int i = 0;
    while (i < n - 1)
    {
        if (arr[i] != i)
        {
            if (arr[i]!=-1 && arr[i] == n  )
            {
                arr[i] = -1;
                i++;
            }
            else if(arr[i]==-1){
                i++;
            }
            else    
            {
                swap(arr, i, arr[i]);
            }
        }
        else
            i++;
    }
}

int main()
{
    int arr[] = {3,0,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    function(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}