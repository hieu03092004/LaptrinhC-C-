#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void Solve(){
	int k;
	cin>>k;
	cin.ignore();
	string s;
	getline(cin,s);
	int d[256]={0};
	for(char x:s){
		d[x]++;
	}
	priority_queue<int>q;//thang nay la max heap
	for(int i=0;i<256;i++){
		if(d[i]!=0)
		q.push(d[i]);
	}
	while(k--&&q.size()){
		int u=q.top();
		q.pop();
		if(u-1>=0)
		q.push(u-1);
	}
	ll res=0;
	while(!q.empty()){
		int w=q.top();
		q.pop();
		res+=1ll*w*w;
	}
	cout<<res<<endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		Solve();
	}
}
