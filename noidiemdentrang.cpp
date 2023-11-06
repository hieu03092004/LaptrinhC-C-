#include<bits/stdc++.h>
using namespace std;
vector<int>v;
vector<pair<int,int>>res;
int main(){
		#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n,cnt=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	if(v.size()%2==0){
	for(int i=0;i<v.size();i+=2){
		res.push_back({v[i],v[i+1]});
	}
		for(int i=1;i<res.size();i++){
			int u=res[i].first;
			int v=res[i-1].second;
			if(u>v)
				cnt++;
		}
		cout<<cnt;
	}
	
}