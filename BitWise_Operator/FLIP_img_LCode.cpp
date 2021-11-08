#include<iostream>
using namespace std;
int main(){
int n=4;
int img[n][n];
for(int i=0; i<n;i++){
    for(int j=0; j<(n+1)/2;j++){
        //swap

        int temp = img[i][j]^1;
        img[i][j]  = img[i][n-i-1]^1;
        img[i][n-i-1] = temp;
    }

}                                                                                                   
return img[1];

return 0;
}