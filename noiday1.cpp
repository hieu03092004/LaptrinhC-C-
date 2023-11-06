#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int n;
	cin>>n;
	priority_queue<ll,vector<ll>,greater<ll>>q;
	// thang nay la minheap
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		q.push(x);
	}
	ll res=0;
	ll mod=1e9+7;
	while(q.size()>=2){
		ll u=q.top();
		q.pop();
		ll v=q.top();
		q.pop();
		res+=1ll*(u+v);
		res%=mod;
		q.push(u+v);
	}
	cout<<res;
}
