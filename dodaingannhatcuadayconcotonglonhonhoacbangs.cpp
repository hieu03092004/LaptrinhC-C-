#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first;
#define se second;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//do dai ngan nhat cua day con co tong bang >=s
	int n,s,sum=0,left=0,res=1e9;
	for(int right=0;right<n;right++){
		sum+=a[r];
		while(sum>=s){
			//minh thu thu hep lai
			sum-=a[left];
			res=min(res,right-left+1);
			left++;
		}
	}
	cout<<res;
}	