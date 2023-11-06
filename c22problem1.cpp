#include<bits/stdc++.h>
using namespace std;
vector<int>a;
int upper(int pos,int x){
	int res=-1;
	int l=0,r=pos-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]<x){
			res=m;
			return res;
		}
			
		else
			r=m-1;
	}
	return res;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	int cnt=0;
	for(int i=0;i<a.size();i++){
		if(upper(i,a[i])!=-1)
			cnt++;
	}
	cout<<cnt;
}