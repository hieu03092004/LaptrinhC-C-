#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,q;
	cin>>n>>q;
	int a[n+1]={0};
	long long pr[n+1]={0};
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)
		pr[i]=pr[i-1]+a[i];
	while(q--){
		int l,r;cin>>l>>r;
		l++;r++;
		cout<<pr[r]-pr[l-1]<<endl;
	}
}
