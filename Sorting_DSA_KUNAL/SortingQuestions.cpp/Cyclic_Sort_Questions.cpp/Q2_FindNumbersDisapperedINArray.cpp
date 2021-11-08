#include <iostream>
using namespace std;
void swap(int *arr, int j, int k)
{
    int temp = arr[j];
    arr[j] = arr[k];
    arr[k] = temp;}

void function(int *arr, int n){
    int i = 0, index;
    while (i < n)
    {
        index = arr[i] - 1;
        if (arr[index] != index + 1)
        {
    
            {
                swap(arr, i, index);
            }
        }
        else
            i++;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i+1)
        cout << i+1 << "\t";
    } 
}
int main()
{
    int arr[] = {10,9,6,6,5,5,4,2,1,1};
    int size = sizeof(arr) / sizeof(arr[0]);
     function(arr, size);
    return 0;
}