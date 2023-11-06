#include<bits/stdc++.h>
using namespace std;
int d[101];
int main(){
	int n;
	cin>>n;
	int a[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(d[a[i][j]]==i-1)
				d[a[i][j]]=i;
		}
	}
	int ok=0;
	for(int i=0;i<=101;i++){
		if(d[i]==n){
			cout<<i<<" ";
			ok=1;
		}
	}	
	if(ok==0)
		cout<<"NOT FOUND";
	return 0;
}
