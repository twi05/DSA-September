#include<iostream>
using namespace std;
int main(){

// char str[10] ={};
// cin>>str;

// char str2[10];
// cin>>str2;

// cout<<str;
// cout<<str2;

// int num1 = atoi(str);
int num1 = 17;
// int num2 = atoi(str2);
int arr[5];
int i=0;
while(num1 != 0){

arr[i] = num1%2;
num1 /=2;
i++;



}

for(int i=0; i<5; i++){
    cout<<arr[i];
    
}



return 0;
}