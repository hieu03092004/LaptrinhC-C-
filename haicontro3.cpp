#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int n, s; cin >> n >> s;
    int a[n];
    for(int &x : a) cin >> x;
    ll sum = 0;
    int l = 0;
    ll res = 0;
    for(int r = 0; r < n; r++){
        sum += a[r];
        //cap nhat doan l => r : OK
        // sum <= s
        while(sum > s){
            sum -= a[l];
            ++l;
        }
        res += r - l + 1;
    }
    cout << res << endl;
}
