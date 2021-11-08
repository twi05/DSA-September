#include<iostream>
using namespace std;
int main(){
int arr[]= {1,1,1,2,2,2,3,3,3,4,4,4,5};
   int n= sizeof(arr) / sizeof(arr[0]);
   int sum=0;
    for (int i = 0; i < n; i++)
    {
sum+=arr[i];
    }
    cout<<sum%3;
return 0;
}