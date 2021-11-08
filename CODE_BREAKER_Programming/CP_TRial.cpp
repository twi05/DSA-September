#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
int main()
{

    srand(time(0));
    for (int i = 0; i < 5; i++)
    {
        cout<<rand()%2+1<<"\t";
    }

    return 0;
}