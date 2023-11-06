#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int a[200][1006];
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
bool checkdfs(int i,int j,int sum,int z){
	sum+=a[i][j];
	if(sum==z)
		return true;
	//k la thang can
	for(int k=0;k<8;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=0 && i1<n && j1>=0 && j1<m){
			checkdfs(i1,j1,sum,z);
		}
	}
}
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	for(int i=0;i<k;i++){
		int x;
		cin>>x;
		if(checkdfs(0,0,0,x))
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;
	}
}
