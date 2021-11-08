#include<iostream>
using namespace std;

int sqrt_int(int n){
    int low = 0, high = n/2;
    while(low<=high){
        int mid = (low+high)/2;
        if(mid*mid <=n){
            low = mid+1;

        }
        else 
        high = mid-1;
    }
    return low - 1;
}
int main(){

    int num = 888
    ;
    cout<<sqrt_int(num);

return 0;
}