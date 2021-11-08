#include<iostream>
using namespace std;
int main(){

int n=5;
if(n==0){
    cout<<"false";
    return 0;
}
(n & (n-1))==0?cout<<"True":cout<<"false";
return 0;
}