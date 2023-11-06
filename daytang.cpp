#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n,minpos,min=1e9+7;
	bool check1=true,check2=true,check3=true;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<min){
			min=a[i];
			minpos=i;
		}
	}
	if(minpos==n){
		if(a[minpos]<a[1]){
			cout<<minpos;
			return 0;
		}
		else{
			cout<<"-1";
			return 0;
		}
	}
	//tuc la  khac o phan tu cuoi cung
	for(int i=minpos+1;i<=n;i++)
			if(a[i]<=a[i-1])
			check1=false;
	for(int i=2;i<minpos;i++)
		if(a[i]<=a[i-1])
			check3=false;
	if(a[n]>=a[1])
		check2=false;

	if(check1 && check2 && check3)
		cout<<minpos;
	else
		cout<<"-1";
}
