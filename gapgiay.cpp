#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int c=1e9+7;
ll pinpow(int a,int b){
	if(b==0)
		return 1;
	else{
		ll x=pinpow(a,b/2);
		if(b%2==0)
			return (x%c )*(x%c)%c;
		else
			return ((x%c )*(x%c)%c)*(a%c)%c;
	}
}
int main(){
	int a,b,n=1;
	cin>>a>>b;
	while(1ll*a*pinpow(2,n)<=b){
		n++;
	}
	cout<<n-1;
}
