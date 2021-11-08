#include <iostream>
using namespace std;

int main()
{   int ans = 0;
    int five = 5;
    int last;
    for(int n=1; n<=5; n++)
{

   ans = 0;
        while (n)
        {
            last = n & 1;
            ans = last * five + ans;
            n = n >> 1;
            five *= 5;
        }
        cout << ans << "\t";
}
    return 0;
}