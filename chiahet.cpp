#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll gcd(ll a,ll b){
	if(b==0)
		return a;
		return gcd(b,a%b);
}
ll lcm(ll x,ll y){
	return x/gcd(x,y)*y;
}
//tim so nho nhat lon hon hoac bang>=10mun-1 va chia het cho x va y
ll solve(int n,int x,int y){
	ll tmp=lcm(x,y);
	// la so nho nhat chia het cho 10^n-1 && chia het cho tmp
	ll m=ll(pow(10,n-1));
	ll res=(m+tmp-1)/tmp*tmp;
	if(res<=ll(pow(10,n)))
		return res;
	return -1;
	
}
int main(){
	int n;
	cin>>n;
	cout<<solve(n,3,7);//so nho nhat co n chu so chia het cho 3 va 7
}
