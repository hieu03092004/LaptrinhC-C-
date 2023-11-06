#include<bits/stdc++.h>
using namespace std;
int m,n,k,t;
int a[1000007];
int b[1000007];
//n la so luong phan tu a
// m la so luong phan tu b
void solve(int l,int r){
	int res=1e9+1;
	//dung 1 cai vecto de luu 
	vector<int>v;
	for(int i=l;i<=r;i++){
		v.push_back(a[i]);
	}
	for(int i=1 ;i<=n;i++)
		v.push_back(b[i]);

	sort(v.begin(),v.end());
	for(int i=1;i<v.size();i++){
		res=min(abs(a[i] - a[i-1] ),res);
	}
	cout<<res<<endl;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	cin>>m>>n>>k;
	for(int i=1;i<=m;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	while(k--){
		int l,r;
		cin>>l>>r;
		solve(l,r);
	}
	return 0;
}

