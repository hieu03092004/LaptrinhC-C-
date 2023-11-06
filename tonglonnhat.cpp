#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int n,q;
	cin>>n>>q;
	int a[n];
	for(int &x:a)cin>>x;
	int d[n+2]={0};
	while(q--){
		int l,r;
		cin>>l>>r;
		l--;r--;
		d[l]+=1;
		d[r+1]-=1;
	}
	//mang cong don cua mang d chinh la so lan truy van 
	int F[n];
	F[0]=d[0];
	for(int i=1;i<n;i++){
		F[i]=F[i-1]+d[i];
	}
	ll res=0;
	sort(a,a+n,greater<int>());
	sort(F,F+n,greater<int>());
	for(int i=0;i<n;i++){
		res+=1ll*a[i]*F[i];
	}
	cout<<res;
}
