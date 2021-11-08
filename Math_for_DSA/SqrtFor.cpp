#include <iostream>
using namespace std;

int findroot(int n)
{
    int s = 0, e = n;
    int mid;
    while (s <= e)
    {
        mid = (s + e) / 2;
 
        if (mid * mid == n)
        {
            return mid - 1;
        }

        else if (mid * mid > n)
        {
            e = mid - 1;
        }

        else
            s = mid + 1;
    }

    double inc = 0.1;

    for (int i = 0; i < p; i++)
    {

        while (root * root <= ori)
        {
            if (root * root == ori)
            {
                return (n + x);
            }
            root -=inc;
                       root  /= 10;
        }
    }
}

int main()
{

    float n = 25;
    float root = findroot(n);
    cout << root << endl;
    cout << precision(root, 0.0, n);
    return 0;
}