#include <bits/stdc++.h>
using namespace std;

#define max1(a, b) ((a) > (b) ? (a) : (b))
#define swap1(a, b) { int t = (a); (a) = (b); (b) = t; }

int main() {
    int a, b,c,d;
    cin >> a >> b>>c>>d;
    int e = max1(a, b);
    int f = max1(c,d);
    int max_val=max1(e,f);
    cout << "Max: " << max_val <<  endl;
    swap1(a, b);
    cout << "hai so a b sau khi swap la " << "a: " << a << " b: " << b;
    return 0;
}
