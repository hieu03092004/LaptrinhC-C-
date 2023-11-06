#include<bits/stdc++.h>
using namespace std;
// xe bang 1 va tuong bang 2
int n=8,x[100],cot[100],cheo1[100],cheo2[100],a[105][105];
int main(){
	int u,v,s,t,res=0;
	cin>>u>>v>>s>>t;
	//hang u cot v
	for(int i=1;i<=n;i++){
		a[u][i]=1;
	}
	for(int i=1;i<=n;i++){
		a[i][v]=1;
	}
	cheo1[s-t+n]=1;
	cheo2[s+t-1]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
		if(cheo1[i-j+n]==1||cheo2[i+j-1]==1)
						a[i][j]=2;			
		}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			if(a[i][j]!=0)
				res++;
		}
	cout<<res;
	}
	
