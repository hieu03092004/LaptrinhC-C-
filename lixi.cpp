#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){
	if(a.second!=b.second)
		return a.second>b.second;
	else
		return a.first>b.first;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n,res=0,stdt=1;
	cin>>n;
	vector<pair<int,int>>v(n);
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		v[i].first=x;
		v[i].second=y;

	}
	if(n==1){
		cout<<v[n-1].first;
		return 0;
	}
	sort(v.begin(),v.end(),cmp);
	for(auto it:v){
		int u=it.first;
		int v=it.second;
		res+=u;
		stdt=stdt+v-1;
		if(stdt==0){
		cout<<res;
		return 0;		
		}	
	}
	cout<<res;
}
