#include <iostream>
using namespace std;

int findroot(int n)
{
    int s = 0, e = n;
    int mid;
    while (s <= e)
    {
        mid = (s + e) / 2;

        if (mid*mid== n)
        {
            return mid-1;
        }

        else if (mid*mid> n)
        {
            e = mid - 1;
        }

        else
            s = mid + 1;
    }
    return mid-1;
}

float precision(float n, float x, int ori){
    
    while((n+x)*(n+x) <= ori){
        if((n+x)*(n+x) == ori){
            return (n+x);
        }
    x+=0.1;
    }
    return (n+x-0.1);
}
int main()
{

    float n = 25;
float root = findroot(n);
cout<<root<<endl;
    cout << precision(root, 0.0,n);
    return 0;
}