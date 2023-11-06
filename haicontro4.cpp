#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int n, s; cin >> n >> s;
    int a[n];
    for(int &x : a) cin >> x;
    int ans = 0, left = 0;
    ll sum = 0;
    for(int right = 0; right < n; right++){
        sum += a[right];
        //neu sum > s => thu hep doan [l, r] = cach tang left
        while(sum > s){
            sum -= a[left];
            ++left;
        }
        ans = max(ans, right - left + 1);
    }
    cout << ans << endl;
}
