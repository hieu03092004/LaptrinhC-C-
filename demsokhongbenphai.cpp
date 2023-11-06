#include<bits/stdc++.h>
using namespace std;
int d[100006];
using ll=long long;
int main(){
	ll res=0;
	int n,max1=-1e9;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		d[a[i]]++;
		max1=max(a[i],max1);
	}
	//luc nay minh da co tan suat roi
	for(int i=1;i<=max1;i++){
		if(d[i]>=2)
			res+=1ll*(d[i])*(d[i]-1)/2;
	}
	cout<<res;
}
