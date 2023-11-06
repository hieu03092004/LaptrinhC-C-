#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,res;
	cin>>n;
	int a[n];
	for(int &x:a)cin>>x;
	sort(a,a+n);
	for(int i=1;i<n;i++){
		if((i-1)>=0&& (i+1)<n){
			//tuc no con trong chi so hop le
			res=min(a[i]-a[i-1],a[i+1]-a[i]);
		}
	}
	cout<<res;
}
