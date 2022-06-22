#include <stdio.h>
void bubblesort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        for (int j = 1; j < n - i; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
                flag = 0;
            }
        }
        if (flag)
        {
           break;
        }
    }
    return;
}
int main()
{    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}