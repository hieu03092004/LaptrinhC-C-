#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt1=0,cnt2=0;
	cin>>n;
	int a[n];
	for(int &x:a)cin>>x;
	for(int i=0;i<n;i++){
		if(a[i]==1)
			cnt1++;
		else
			cnt2++;
	}
	if(cnt1<cnt2){
		swap(cnt1,cnt2);
	}
	cout<<cnt1-cnt2;
}
