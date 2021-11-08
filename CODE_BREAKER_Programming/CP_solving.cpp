#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
int main()
{
int i, j;
    int arr[10][10];
    srand(time(0));
        for( i= 0; i<10; i++){
            for (j = 0; j < 10; j++)
            {
                // cout<<"0";
                arr[i][j] = rand()%50+1 -25 ;
            } 
        }
        for(i= 0; i<10; i++){
            for (j = 0; j < 10; j++)
            {
                //  cout<<"1";
                cout<<arr[i][j]<<"\t" ;
            } 
            cout<<"\n";
        }
    return 0;
}