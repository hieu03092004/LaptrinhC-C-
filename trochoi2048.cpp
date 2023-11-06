#include<bits/stdc++.h>
using namespace std;
int a[20][20];
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	//minh duyet tu n cho toi 2
	//duyet tung cot duyet tu hang n doi hang 2
	for(int i=1;i<=n;i++){
		for(int j=n;j>=2;j--){
			//hang se la thang chay
			if(a[j][i]==a[j-1][i]){
					a[j][i]=a[j][i]+a[j-1][i];
					a[j-1][i]=0;
			}		
			else{
				a[j][i]=a[j-1][i];
				a[j-1][i]=0;
			}				
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}	
}