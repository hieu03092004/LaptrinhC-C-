#include<bits/stdc++.h>
using namespace std;
int n,m,k;
char a[22][22];
bool visited[22][22];
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
// n hang m cot 
void loang(int i,int j){
	for(int k=0;k<8;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1&&i1<=n && j1>=1 && j1<=m && a[i1][j1]!='*'){
							a[i1][j1]=a[i1][j1]+1;													
		}
	}
}
void nhap(){
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			a[i][j]='0';
		}
	}
	for(int i=0;i<k;i++){
		int x,y;
		cin>>x>>y;
		a[x][y]='*';
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	nhap();
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]=='*')
				loang(i,j);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			cout<<a[i][j];
			cout<<endl;
	}
	return 0;
}

