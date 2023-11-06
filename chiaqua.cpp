#include<bits/stdc++.h>
using namespace std;
int  main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n,sum=0;
	cin>>n;
	int a[n+1],f[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	if(sum%2==0){
	f[0]=0;
	for(int i=1;i<=n;i++)
		f[i]=f[i-1]+a[i];
	if(n%2==0 &&f[n/2]-f[0]==sum/2){
		cout<<"YES";	
		}
	else if(n%2!=0 && f[n/2+1]-f[0]==sum/2)
		cout<<"YES";
	else
		cout<<"NO";
	}
	else
		cout<<"NO";	
}