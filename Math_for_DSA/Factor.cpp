// https://youtu.be/lmSpZ0bjCyQ?t=3583
#include <iostream>
using namespace std;

void factor(int n)
{
    int arr[20];
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            if(i==1 || i*i==n){
            cout<<i<<" ";
            }
            else 
            cout<<i<<" "<<n/i<<" ";
        }
    }
}

int main()
{
    int n=20;
    factor(n);
    return 0;
}