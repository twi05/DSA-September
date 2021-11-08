#include<iostream>
using namespace std;

    int digits(int n){
        int count=0;
        while(n>0){
            n=n/10;
            count ++;
        }
        return count;
    }

    int ans(int arr[], int n){
        int count = 0;
        for(int i=0; i<n; i++){
            if(digits(arr[i])%2==0){
                count ++;
            }
        }
        return count;
    }




int main(){
int arr[] = {502,690,600,5,999,80};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<ans(arr, n);
return 0;
}