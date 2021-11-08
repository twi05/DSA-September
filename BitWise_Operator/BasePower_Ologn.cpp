#include <iostream>
using namespace std;
int main()
{
    int base = 2;
    int power = 4;
    int ans = 1;

    while (power > 0)
    {
        if ((power & 1) == 1)
        {
            ans = ans * base;
        }
        power = power >> 1;
        base *= base;
    }
    cout << ans;

    // int ans=10;
    // while (ans >0)
    // {
    //     ans =ans >> 1;
    //     cout << ans<<endl;
    // }
    return 0;
}