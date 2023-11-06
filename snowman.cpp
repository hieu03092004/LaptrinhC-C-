#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100006];
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n,cnt=0;
	cin>>n;
	int a[n];
	int u=n/3*3;
	for(int &x:a)cin>>x;
	// sort(a,a+n,greater<int>());
	for(int i=0;i<=u-1;i+=3){
		set<int>se;
		for(int j=i;j<i+3;j++){
			se.insert(a[j]);
		}
		if(se.size()==3){
			cnt++;
			for(auto it:se)
				adj[cnt].push_back(it);
		}
		se.clear();
	}
	if(cnt!=0){
		cout<<cnt<<endl;
	for(int i=1;i<=cnt;i++){
		sort(adj[i].begin(),adj[i].end(),greater<int>());
		for(int j=0;j<adj[i].size();j++)
			cout<<adj[i][j]<<" ";
		cout<<endl;
		}
	}
	else
		cout<<cnt;
}