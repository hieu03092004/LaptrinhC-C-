#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,l;//k luon be hon n
	cin>>n>>k;
	l=min(k,n-k);
	int a[n];
	for(int &x:a)
	cin>>x;
	sort(a,a+n);
	long long tong1=0,tong2=0;
	for(int i=0;i<l;i++){
		tong1+=a[i];
	}
	for(int i=l;i<n;i++){
		tong2+=a[i];
	}
	cout<<tong2-tong1;
}
