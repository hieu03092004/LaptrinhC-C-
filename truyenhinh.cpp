#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,res=0;
	cin>>n;	
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		v.push_back({x,y});
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(!(v[j].first >= v[i].second || v[i].first>=v[j].second))
				res++;
		}
	}
	cout<<res;
}
