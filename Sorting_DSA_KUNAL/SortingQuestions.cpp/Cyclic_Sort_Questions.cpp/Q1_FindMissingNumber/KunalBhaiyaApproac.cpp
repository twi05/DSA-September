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
    
    int i = 0;
    while (i < n )
    {
        if (arr[i] != i)
        {
        if (arr[i] == n)
            {
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
     for (int i = 0; i < n; i++)
    {
        if(arr[i]==n)
        cout <<i<< "\t";
        
    }
    return n;
}

int main()
{
    int arr[] = {1,0,2,4,6,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<function(arr, size);
   

    return 0;
}