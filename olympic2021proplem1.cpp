#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int k;
ll gcd(int a,int b){
	if(b==0)
		return a;
	return(b,a%b);
}
ll lcm(int a,int b){
	return a*b/gcd(a,b);
}
void solve(){
	set<int>se;
	//luu nhung so chia het cho 7
	for(int i=1;i<=k;i++){
		int u=3*i;
		se.insert(u);
	}
	for(int i=1;i<=k;i++){
		int u=5*i;
		se.insert(u);
	}
	for(int i=1;i<=k;i++){
		int u=7*i;
		se.insert(u);
	}
	vector<int>res;
	for(int x:se){
		res.push_back(x);
	}
	k--;
	cout<<res[k]
	// int w=lcm(3,5);
	// for(int i=1;i<=k/2;i++){
	// 	int u=w*i;
	// 	res.push_back(u);
	// }
	// int k=lcm
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	cin>>k;
	solve();
	return 0;
}
