#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int n,int l,int m){
	int sum=0;
	for(int i=0;i<n;i++){
		if(a[i]>m)
			sum+=a[i]-m;	
	}
	if(sum>=l)
		return true;
	return false;
}
using namespace std;
int main(){
	int n,l;
	cin>>n>>l;
	int a[n],ans=0;
	for(int &x:a)cin>>x;
	int l1=0,r=*max_element(a,a+n);
	while(l1<=r){
		int m=(l1+r)/2;
		if(check(a,n,l,m)){
			ans=m;
			l1=m+1;
		}
		else{
			//tuc la luong go thu duoc nho hon hoac bang l
			//thu hep lai
			r=m-1;
		}
	}
	cout<<ans;
}
