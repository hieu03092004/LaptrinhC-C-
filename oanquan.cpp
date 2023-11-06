#include<bits/stdc++.h>
using namespace std;
void in(int a[],int n){
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
}
// co n va k so
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n,k;
	cin>>n>>k;
	int idx=k+1;
	int a[n+1];
	//lay chi so tu 1
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int tmp=a[k];
	if(k==n && a[k]>n-1){
		a[k]=1;
		for(int i=0;i<k;i++)
			a[i]++;
		in(a,n);
	}
	else{
		
		//chung nao con lon hon 
		while(tmp>0){
			if(idx==n+1)
				idx=1;
			a[idx]++;
			// cout<<idx<<" "<<a[idx]<<endl;
			tmp--;
			a[k]--;
			idx++;
			
		}
		in(a,n);
	}

}
