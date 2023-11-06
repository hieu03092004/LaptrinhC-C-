#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int &x:a)
	cin>>x;
	sort(a,a+n);// ko lay can cuoi cung
	ll mod=1e9+7;
	ll res=0;
	for(int i=0;i<n;i++){
		res+=1ll*i*a[i];
		res=res%mod;
	}
	cout<<res;
}
