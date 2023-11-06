#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main ()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string s="ConCho chay qua rao";
    cout << s.substr(2,4) << endl;
    // cout << new string(str.begin()+2, str.begin()+2+4);
    getchar();
    return 0;
}