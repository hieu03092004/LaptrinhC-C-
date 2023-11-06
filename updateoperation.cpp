#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,q;
	cin>>n>>q;
	int a[n+1]={0};
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int d[n+1]={0};
	for(int i=1;i<=n;i++){
		d[i]=a[i]-a[i-1];
	}
	while(q--){
		int l,r,k;
		cin>>l>>r>>k;
		l++;r++;
		d[l]+=k;
		d[r+1]-=k;
	}
	for(int i=1;i<=n;i++)
		d[i]+=d[i-1];
	for(int i=1;i<=n;i++){
		cout<<d[i]<<" ";
	}
}

