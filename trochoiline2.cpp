#include<bits/stdc++.h>
using namespace std;
//code bfs
#define pip pair<int,pair<int,int>>
int n,a[10][10];
int u,v,s,t;
int d[100][100];
int parent1[11];
 int  parent2[11];
//de danh dau khong vao lai nx
//mot cai vector res de luu ket qua
//minh co u v voi s t

int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
void nhap(){
	cin>>n>>u>>v>>s>>t;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j]==1)
				a[i][j]=2;
			if(a[i][j]==0)
				a[i][j]=1;
		}
	}

}
void disktra(int u,int v,int s,int t){
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			d[i][j]=1e9;
	//di tu o w k den o u v
	d[u][v]=0;
	parent1[u]=u;
	priority_queue<pip,vector<pip>,greater<pip>>q;
	q.push({0,{u,v}});
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
				if(a[i1][j1]==1&&i1>=1 &&i1<=n && j1>=1 && j1<=n){
					if(d[i1][j1]>d[i][j]+a[i1][j1]){
						parent1[i1]=i;
						parent2[j1]=j;
						d[i1][j1]=d[i][j]+a[i1][j1];
						q.push({d[i1][j1],{i1,j1}});
					}
				}
		}	
	}
	vector<int>e;
	while(1){
		e.push_back(s);
		if(s==u)
			break;
		s=parent1[s];
	}
//	for(int x:e)
//		cout<<x<<" ";
	// vector<pair<int,int>>e;
	// while(1){
	// 	e.push_back({s,t});
	// 	cout<<s<<" "<<t<<endl;
	// 	if(s==u && t==v)
	// 		break;
	// 		s=parent1[s];
	// // 		t=parent2[t];		
	// // }
	// cout<<"1";
//	reverse(e.begin(),e.end());
//	for(auto it:e){
//		cout<<it.first<<" "<<it.second<<endl;
//	}
}	
int main(){
//	#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//	#endif
	nhap();
	disktra(u,v,s,t);
	if(d[s][t]==0)
		cout<<"0";
	else
		cout<<d[s][t]<<" ";
}
