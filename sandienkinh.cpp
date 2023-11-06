#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	pair<int,int>res=make_pair(-1,-1);
	cin>>n>>m;
	int a[n];
	for(int&x:a)cin>>x;
	for(int i=0;i<n;i++){
		if(binary_search(a,a+n,a[i]-m)){
			res=make_pair(a[i]-m,a[i]);
		}
	}
	if(res.first==-1){
		cout<<"-1";
	}
	else
		cout<<res.first<<" "<<res.second;
}
