#include <iostream>
using namespace std;

bool isOdd(int num){
    return (num & 1 )==1;
}
int main()
{
    int num = 56;
    cout<<isOdd(num);
    return 0;
}