#include<bits/stdc++.h>
using namespace std;
int bs(int a[],int n,int k){
	int l=0,r=n-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==k)
			return 1;
		else if(a[mid]<k)
			r=mid-1;
		else	
			l=mid+1;
	}
	return 0;
}
int main(){
	int n;cin>>n;
	int a[n];
	for(int &x:a)cin>>x;
	int q;cin>>q;
	while(q--){
		int x;cin>>x;
		if(bs(a,n,x))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}

