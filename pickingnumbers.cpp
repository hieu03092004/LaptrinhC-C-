#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int b[100];
int main(){
	int n,max1=-1e9;
	cin>>n;
	int a[n];
	for(int &x:a){
		cin>>x;
		b[x]++;
		max1=max(max1,x);
	}
	//mang so duong moi lam duoc
	int res=-1e9;
	for(int i=2;i<=max1;i++){
			int tmp=b[i]+b[i-1];
			res=max(res,tmp);
		}
	cout<<res;	
	}
	
