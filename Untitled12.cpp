#include<bits/stdc++.h>
using namespace std;
long long c[51][51];
int mod=1e9+7;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<=50;i++){
		for(int j=0;j<=i;j++){
			if(j==0||i==j){
				c[i][j]=1;
			}
			else{
				c[i][j]=c[i-1][j-1]+c[i-1][j];
				c[i][j]%mod;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}
