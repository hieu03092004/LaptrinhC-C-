#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(int n){
	queue<ll>q;vector<ll>res;
	q.push(4);
	q.push(7);
	while(true){
		ll u=q.front();
		q.pop();
		res.push_back(u);
		if(res.size()==n)
		break;
		q.push(1ll*u*10+4);
		q.push(1ll*u+10+7);
	}
	cout<<res[n-1];
}
int main(){
	int n;
	cin>>n;
	solve(n);
}
