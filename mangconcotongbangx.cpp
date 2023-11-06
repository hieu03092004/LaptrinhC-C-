#include<bits/stdc++.h>
using namespace std;
using ll=long long;
//tu tuong la gi xem trong doan i co bao nhieu mang con co tong bang x
int main(){
	int n,x;cin>>n>>x;
	int a[n];
	for(int &x:a)cin>>x;
	ll tong=0,ans=0;
	map<ll,int>mp;
	for(int i=0;i<n;i++){
		tong+=a[i];
		if(tong==x)ans++;
		if(mp.count(tong-x))
		//map se tim theo key ham
		ans++;
		mp[tong]=1;
	}
	cout<<ans;
}
