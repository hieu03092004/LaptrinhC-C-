#include<bits/stdc++.h>
using namespace std;
#define pip pair<int,pair<int,int>>
char a[50][50];
int d[100][100];
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
int u,v,w,k,n,m;
//di tu c den b
void nhap(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='B'){
				u=i;
				v=j;
			}
			if(a[i][j]=='C'){
				w=i;
				k=j;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			if(a[i][j]=='.')
				a[i][j]='1';
	}
	a[u][v]='1';
}
void disktra(){
	for(int i=1;i<=m;i++)
		for(int j=1;j<=m;j++)
			d[i][j]=1e9;
	//di tu o w k den o u v
	d[w][k]=0;
	priority_queue<pip,vector<pip>,greater<pip>>q;
	q.push({0,{w,k}});
	while(!q.empty()){
		auto it=q.top();
		q.pop();
		//lay thang o dau hang doi ra
		int i=it.second.first;
		int j=it.second.second;
		int len=it.first;
		if(len>d[i][j])continue;
		for(int k=0;k<4;k++){
			int i1=i+dx[k];
			int j1=j+dy[k];
				if(a[i1][j1]=='1'){
					if(d[i1][j1]>d[i][j]+a[i1][j1]-'0'){
						d[i1][j1]=d[i][j]+a[i1][j1]-'0';
						q.push({d[i1][j1],{i1,j1}});
					}
				}
		}	
	}	
	cout<<d[u][v];
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	nhap();
	disktra();

}	