#include<iostream>
using namespace std;

long long int subsum(long long int n){
    long long int sum=0;
    long long int product=1;
long long int x;

    while(n){
        x=n%10;
        sum+=x;
        product*=x;
        n=n/10;
    }
    return product-sum;
}
int main(){

long long int n = 4422265456452221;
cout<<subsum(n);
return 0;
}