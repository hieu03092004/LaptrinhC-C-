#include<bits/stdc++.h>
using namespace std;

long long UCLN(long long x, long long y){
    while(y!=0){
        long long t = y;
        y = x%y;
        x = t;
    }
    return x;
}


long long ans(long long l, long long r, long long a, long long k){
    long long C = k/UCLN(a,k);
    long long p = l/C;
    long long count =0;
    if(l%C!=0)p++;
    cout<<p<<" "<<C<<endl;
    while(C*p<=r){
        count++;
        p++;
        //cout<<p<<endl; 
    }
    return count;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    long long l,r,a,k;
    cin>>l>>r>>a>>k;
    cout<<ans(l,r,a,k)<<endl;

    return 0;
}