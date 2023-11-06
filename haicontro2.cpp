#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int i = 0, j = 0;
    ll ans = 0;
    //O(N + M) NlogN, MlogM
    while(i < n && j < m){
        if(a[i] == b[j]){
            //a[i].... ?
            //b[j].... ?
            int dem1 = 0;
            while(a[i] == b[j]){
                ++dem1;
                ++i;
            }
            int dem2 = 0;
            while(a[i - 1] == b[j]){
                ++dem2;
                ++j;
            }
            ans += 1ll * dem1 * dem2;
        }
        else if(a[i] < b[j]){
            ++i;
        }
        else ++j;
    }
    cout << ans << endl;
}
