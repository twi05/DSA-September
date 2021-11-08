// #include<iostream>
// using namespace std;
// int main(){
// string str = std::bitset<8>(123).to_string(2);
// return 0;
// }

#include <iostream>
#include <vector>
#include <bitset>

using std::cout;
using std::endl;
using std::string;
using std::bitset;

string toBinary(int n)
{
    string r;
    while ( n!=0 ){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}

int main() {
    string str = "10";

    for (int i = 0; i < str.length(); ++i) {
        cout << toBinary(str[i]) << " ";

        if (i % 6 == 0 && i != 0)
            cout << endl;
    }

    return EXIT_SUCCESS;
}