#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	//n la so thanh domino
	// a la chieu rong b la chieu cao cua thanh domino
	int a,b,n;cin>>a>>b>>n;
	//tim canh nho nhat cua hinh vuong de co them dc n thanh domino
	ll r=1ll*max(a,b)*n,l=1;
	ll res;
	while(l<=r){
		ll m=(l+r)/2;
		ll x=m/a;
		ll y=m/b;
		if(x*y>=n){
			res=m;
			r=m-1;
		}
		else
			l=m+1;
	}
	cout<<res;
}
