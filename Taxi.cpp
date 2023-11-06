#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	map<int,int>m;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		m[x]++;
	}
	int res=0;
	for(auto it:m){
		int u=it.second;
		if(u<=4)
			res++;
		else{
			int r=u%4;
			int w=u/4;
			res+=w;
			if(r!=0)
			res++;
			
		}
	}
	cout<<res;
}
