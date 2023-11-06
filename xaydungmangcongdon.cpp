#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	for(int &x:a)cin>>x;
	ll f[n];
	f[0]=a[0];
//	cout<<f[0];
	for(int i=1;i<=n-1;i++){
		f[i]=f[i-1]+a[i];
	}
	for(ll x:f)cout<<x<<" ";
}
