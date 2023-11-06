#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
int a[10][10],n;
void loang(int u,int v){
	a[u][v]=1;
	for(int k=0;k<4;k++){
		int i1=u+dx[k];
		int j1=v+dy[k];
		if(i1>=1 && j1>=1 &&a[i1][j1]==0 && i1<=n&& j1<=n){
			loang(i1,j1);
		}
	}
}
int main(){
	int u,v,s,t;
	cin>>n>>u>>v>>s>>t;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	loang(u,v);
	if(a[s][t]==1){
		cout<<"YES";
	}
	else
		cout<<"NO";
	return 0;
}
