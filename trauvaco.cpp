#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for (int a = 1; a <= m; a++) {
        for (int b = 1; b <= m; b++) {
            for (int c = 1; c <= m; c++) {
                if (a + b + c == n && a * 5 + b * 3 + c / 3 == m) {
                    cout << a << " " << b << " " << c << endl;
                    return 0;
                }
            }
        }
    }
    cout << -1 << endl;
    return 0;
}
