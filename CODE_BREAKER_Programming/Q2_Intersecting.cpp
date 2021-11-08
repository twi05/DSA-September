#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x1, y1, x2, y2, x3, y3, x4, y4, minslope, maxslope;
    while (t--)
    {

        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        int s1, s2;
        s1 = (y2 - y1) / (x2 - x1);
        s1 = (y4 - y3) / (x4 - x3);

        int minslope = min(s1, s2);
        int maxslope = max(s1, s2);

        if (maxslope % minslope == 0)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}