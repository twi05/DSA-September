#include <iostream>
using namespace std;

int row(int arr[][4], int rows, int cols, int target)
{
    int r, c;
    r = 0;
    c = cols - 1;
    while (c >= 0 && r < rows)
    {
        if (arr[r][c] == target)
        {
            return r;
        }
        else if (arr[r][c] > target)
        {
            c--;
        }
        else
            r++;
    }
    return -1;
}

int column(int arr[][4], int rows, int cols, int target)
{
    int r, c;
    r = 0;
    c = cols - 1;
    while (c >= 0 && r < rows)
    {
        if (arr[r][c] == target)
        {
            return c;
        }
        else if (arr[r][c] > target)
        {
            c--;
        }
        else
            r++;
    }
    return -1;
}

int search(int arr[][4], int rows, int cols, int target)
{

    cout << "Value of row is " << row(arr, rows, cols, target)+1 << endl;
    

    cout << "Value of row is " << column(arr, rows, cols, target)+1;

    return 0;
}

int main()
{
    int arr[][4] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {15, 25, 35, 45}, {28, 29, 37, 49}, {33, 34, 38, 50}};
    int target = 50;
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
    // cout << n << endl;

    search(arr, rows, cols, target);
    return 0;
}