#include <iostream>
using namespace std;

int rightMostBit(int n)
{
    int count = 1;

    while ((n & 1) != 1)
    {
        n = n >> 1;
        count = count + 1;
    }
    return count;
}
int main()
{
    int n = 1;
    cout << rightMostBit(n);
    return 0;
}