#include<bits/stdc++.h>
using namespace std;
int sum(int n){
	int sum=0;
	while(n){
		int r=n%10;
		sum+=r;
		n/=10;
	}
	return sum;
}

bool cmp(int a,int b){
	if(sum(a)!=sum(b))
		return sum(a)<sum(b);
	return a<b;
}
int main(){
	int n;cin>>n;
	int a[n];
	for(int &x:a)cin>>x;
	sort(a,a+n,cmp);
	for(int x:a)cout<<x<<" ";
//	int k;cin>>k;sum(k);
}
