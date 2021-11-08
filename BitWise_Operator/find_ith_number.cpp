#include <iostream>
using namespace std;

int ith(int n, int num)
{
    return(n&(1<<(num-1)));
}
int main()
{
    int n = 9;
    int position = 3;
    cout << ith(n, position);
    return 0;
}