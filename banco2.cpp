#include<bits/stdc++.h>
using namespace std;
int n=8,x[100],cot[100],cheo1[100],cheo2[100],a[105][105];
int res=0;
//o duoc kiem soat boi xe la 3 va tuong la 2
void tuong(int s,int t){
	cheo1[s-t+n]=1;
	cheo2[s+t-1]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
		if(cheo1[i-j+n]==1||cheo2[i+j-1]==1&& a[i][j]!=3 &&a[i][j]!=0&& a[i][j]!=4 && a[i][j]!=5)
						a[i][j]=2;			
		}
}
void xe(int u,int v){
	//duyet hang u 
	for(int i=1;i<=8;i++){
		if(a[u][i]!=0 && a[u][i]!=2 && a[u][i]!=4 && a[u][i]!=5 )
		a[u][i]=3;
	}
	//cot v
	for(int i=1;i<=8;i++){
		if(a[u][i]!=0 && a[u][i]!=2 && a[u][i]!=4 && a[u][i]!=5)
		a[i][v]=3;
	}
}
void solve(){
	for(int i=1;i<=8;i++){
		for(int j=1;j<=8;j++)
			cout<<a[i][j];
		cout<<endl;
	}
//	cout<<res;
}
void ktao(){
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			a[i][j]=0;
}
int main(){
	int t,x;
	cin>>t>>x;
	ktao();
	for(int i=0;i<t;i++){
		int x,y;
		cin>>x>>y;
		a[x][y]=4;
		tuong(x,y);
	}
	//tuong va xe
	for(int i=0;i<x;i++){
		int x,y;
		cin>>x>>y;
		a[x][y]=5;
		xe(x,y);
	}
	solve();
}
