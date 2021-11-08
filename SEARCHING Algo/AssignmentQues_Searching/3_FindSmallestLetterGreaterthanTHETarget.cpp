#include <iostream>
using namespace std;

char letter(char arr[], int n, int target)
{

    int s, e, mid;
    s = 0;
    e = n - 1;

    while (s <= e)
    {
        mid = (s + e) / 2;

    if(arr[mid]>target){
           e = mid-1; 
        }
        else if(arr[mid]<target){
            s = mid+1;

        }
        else if(arr[mid]==target)
        return arr[mid+1];
    }
    return arr[s];
}
int main()
{

    char arr[] = {'c', 'f', 'j'};
    int size = sizeof(arr) / sizeof(arr[0]);
    char target = 'z';
    cout << letter(arr, size, target);

    return 0;
}