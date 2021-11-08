#include <iostream>
using namespace std;
int main()
{

    int arr[] = {0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
   cout<<(n)*(n+1)/2 - sum;
    return 0;
}


