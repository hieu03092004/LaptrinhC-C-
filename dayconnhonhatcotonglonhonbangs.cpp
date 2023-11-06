#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s;cin>>n>>s;
	int a[n];
	for(int &x:a)cin>>x;
	int l=0,res=1e9,sum=0;
	for(int r=0;r<n-1;r++){
		sum+=a[r];
		while(sum>=s){
			res=min(res,r-l+1);
			sum-=a[l];
			l++;
			
		}
	}
	if(res==1e9){
		cout<<"-1";
		return 0;
	}
	cout<<res;
}
