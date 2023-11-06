#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int n;cin>>n;
	ll a[n],b[n];
	for(ll &x:a)cin>>x;
	for(ll &y:b)cin>>y;
	sort(a,a+n);//no se khong lay can ben phai
	sort(b,b+n);
	ll res=0;
	for(int i=0;i<n;i++)
		res+=a[i]*b[i];
	cout<<res;
}
