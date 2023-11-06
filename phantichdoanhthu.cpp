#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int f[n+1];
	f[0]=0;
	for(int i=1;i<=n;i++){
		f[i]=f[i-1]+a[i];
	}
	int max=-1e9,pos;
	for(int i=1;i<=n;i++){
		if(f[i]>max){
			max=f[i];
			pos=i;
		}
	}
	int min=1e9;
	for(int i=1;i<pos;i++){
			if(f[i]<min){
				min=f[i];
			}
	}
	cout<<max-min;
}