#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	ll tien,kq;
	int n,m,t;
	cin>>n>>m>>t;
	ll k=m/(n+1);
	kq=k*(n+1);
	if(kq>=m){
		//tuc la du roi
		tien=1ll*k*n*t;
	}
	else{
		tien=1ll*(k*n+m-kq)*t;
	}
	cout<<tien;
	return 0;
}
