#include<bits/stdc++.h>
using namespace std;
int n;
void ph(int a[],int p,int r){
	int t=p,pivot=a[r];
	for(int i=p;i<=r-1;i++){
		if(a[i]<=a[r]){
			int tmp=a[i];
			a[i]=a[t];
			a[t]=tmp;
			t++;
		}
	}
	swap(a[t],a[r]);
	for(int i=p;i<=r;i++){
		if(a[i]==pivot)
			cout<<"["<<a[i]<<"]"<<" ";
		else if(i!=r)
			cout<<a[i]<<" ";
		else
			cout<<a[i];
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	ph(a,0,n-1);
	// for(int i=0;i<n;i++)
	// 	cout<<a[i]<<" ";
}