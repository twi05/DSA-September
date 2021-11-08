#include <iostream>
#include <math.h>
using namespace std;

// About this Method of Getting Square Root
// Newton Raphson Method

double newtonSqrt(double n)
{
    if (n == 0)
        return 0;

    double x = n;
    double root;

    while (1)
    {
        root = 0.5 * (x + (n / x));
      cout<<  (root - x)<<"\t";
        if (abs(root - x) < 0.01)
        {
            break;
        }

        x = root;
    }
    return root;
}

int main()
{
    double n = 25;
    cout << newtonSqrt(n);
    return 0;
}
