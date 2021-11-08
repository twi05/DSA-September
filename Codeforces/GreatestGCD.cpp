#include <iostream>
using namespace std;
int main()
{
    int numTestcase, num;

    cin >> numTestcase;

    while (numTestcase--)
    {
        cin >> num;
        if (num <= 1)
            cout << "1\n";

        else
            cout << num / 2 << endl;
    }
    return 0;
}