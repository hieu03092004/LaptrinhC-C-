#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll l,r,a,k,cnt=0;
int main(){
	cin>>l>>r>>a>>k;
	for(ll i=l;l<=r;l++){
		if((a*i)%k==0)
			cnt++;
	}
	cout<<cnt;
}

