#include<bits/stdc++.h>
using namespace std;
long long gt(int n){
	if(n==0)
		return 1;
	else
		return n*gt(n-1);
}
int main(){
	int n,cnt=0;
	cin>>n;
	long long u=gt(n);
	while(u){
		int r=n%10;
		if(r==0){
			cnt++;
		}
		if(r!=0){
			cout<<cnt;
			return 0;
		}
		u/=10;
	}
}
