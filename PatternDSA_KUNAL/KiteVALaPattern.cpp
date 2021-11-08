#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    for (int row = 0; row< 2 * n; row++)
    {
        int spc = row<n?n-row: row-n;
        for(int i=0; i <spc; i++){
            cout<<" ";        }
        int totalCols = row > n ? 2 * n - row  : row;
        for (int col = 0; col < totalCols; col++)
            cout << "* ";
        cout << endl;
    }

    return 0;
}