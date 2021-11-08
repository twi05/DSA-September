#include <iostream>
using namespace std;

char ceiling(char arr[], char target, int len)
{
    int s, e;
    s = 0;
    e = len - 1;
    if (arr[e] < target)
    {
        return arr[0];
    }
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == target)
        {
            s = mid + 1;
            break;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return arr[s];

}
int main()
{

    char arr[] = {'c', 'd', 'e', 'q', 'r', 's'};

    int target = 'r';
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << ceiling(arr, target, n);

    return 0;   
}