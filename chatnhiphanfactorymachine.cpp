#include<bits/stdc++.h>
using namespace std;
// n may t la so luong so phan n dong tiep theo la thoi gian
//tao ra 1 san pham cua tung may
using ll=long long;
bool check(int a[],int n,int m,int t){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=m/a[i];
	}
	if(sum>=t)
	return true;
	return false;
}
int main(){
	int n,t;cin>>n>>t;
	int a[n];
	for(int &x:a)cin>>x;
	ll r=1ll**min_element(a,a+n)*t;
	int l=1,res;
	while(l<=r){
		int m=(l+r)/2;
		if(check(a,n,m,t)){
			res=m;
			//tim them ket qua tot hon
			r=m-1;
		}
		else
			l=m+1;
	}
	cout<<res;
}
