#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s;cin>>n>>s;
	int a[n];
	for(int &x:a)cin>>x;
	int l=0,sum=0,res=0;
	for(int r=0;r<n;r++){
		sum+=a[r];
		while(sum>s){
			sum-=a[l];
			l++;
		}
		res=max(res,r-l+1);
	}
	cout<<res;
}
