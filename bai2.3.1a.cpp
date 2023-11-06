#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int mod=1e9+7;
ll luyThua1(int a,int b){
	ll res=1;
	for(int i=0;i<b;i++){
		res*=a;
		res%=mod;
	}
	return res;
}
ll luyThua2(int a,int b){
	if(a==1)
		return 1;
	else{
		ll x=luyThua2(a,b/2);
		if(b%2==0)
			return x%mod*(x%mod)%mod;
		else
			return ((a%mod)*(x%mod)%mod)*(x%mod)%mod;
	}
}	
// void luyThua(int a,int b)
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	cout<<luyThua1(2,3)<<endl;
	cout<<luyThua2(2,3)<<endl;
}