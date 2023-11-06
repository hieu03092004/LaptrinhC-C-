#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n+1]={0};//xay dung tu chi so 1 toi n
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int d[n+1]={0};
	for(int i=1;i<=n;i++){
		d[i]=a[i]-a[i-1];
	}
	for(int i=1;i<=n;i++){
		cout<<d[i]<<" ";
	}
	return 0;
}
