
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void swap(long long arr[], int i, int j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    void insertionSort(long long arr[], int len)
    {
        int i, j;
        for (i = 0; i < len - 1; i++)
        {
            j = i + 1;
            while (j > 0 && arr[j] < arr[j - 1])
            {
                swap(arr, j - 1, j);
                j--;
            }
        }
    }
    void merge(long long arr1[], long long arr2[], int n, int m)
    {
        int i = 0, j = 0, temp;
        while (i < n)
        {

            if (arr1[i] > arr2[j])
            {
                temp = arr1[i];
                arr1[i] = arr2[j];
                arr2[j] = temp;
                i++;
                insertionSort(arr2, m);
            }
        }
        return;
    }
};

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        long long arr1[n], arr2[m];

        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);

        for (int i = 0; i < n; i++)
            cout << arr1[i] << " ";

        for (int i = 0; i < m; i++)
            cout << arr2[i] << " ";

        cout << endl;
    }

    return 0;
}
