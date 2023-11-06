#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first;
#define se second;
int  main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n,m,idx1=0,idx2=0;
	cin>>n>>m;
	ll a[n],b[m];
	for(int &x:a)cin>>x;
	for(int &x:b)cin>>x;
	while(idx1<n &&idx2<m){
		if(abs(a[idx1]-b[idx2])==1)
			cnt++;
		else if(a[idx1]<b[idx2])
			idx1++;
		else
			idx2++;
	}
	cout<<cnt;
}