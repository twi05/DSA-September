#include <iostream>
using namespace std;

int index(char *arr, int n, char temp)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (temp == arr[i])
        {
            return i;
        }
    }
    return i;
}
void swap(char arr[], int j, int k)
{

    int temp = arr[j];
    arr[j] = arr[k];
    arr[k] = temp;
}
void matchPairs(char *nuts, char *bolts, int n)
{
    // code here
    char arr[] = {'!', '#', '$', '%', '&', '*', '@', '^', '~'};
    char temp;
    int i = 0, indexArr;

    while (i < n)
    {

        temp = nuts[i];
        indexArr = index(arr, 9, temp);

        if ((indexArr > n) || (nuts[indexArr] == arr[indexArr]))
        {
            i++;
        }
        else
            swap(nuts, i, indexArr);
    }
    i = 0;
    while (i < n)
    {

        temp = bolts[i];
        indexArr = index(arr, 9, temp);

        if((indexArr> n) || (bolts[indexArr] == arr[indexArr])){
            i++;
        }
        else {
            swap(bolts, i, indexArr);
    }
    }
};

