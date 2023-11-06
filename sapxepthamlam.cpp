#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool Check(int a[],int b[],int n){
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]&&b[i]!=a[n-i-1])
			return false;
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	//chan qua ngoi code cho do bun
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	if(Check(a,b,n))
		cout<<"YES";
	else
		cout<<"NO";
}
