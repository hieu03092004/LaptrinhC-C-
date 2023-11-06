#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,res=-1;
	cin>>n;
	while(n){
		int r=n%10;
		res=max(res,r);
		n/=10;
	}
	cout<<res;
}
