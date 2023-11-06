#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s;cin>>n>>s;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<bool>dp(s+1);
	dp[0]=true;//day la bai toan con nho nhat
	for(int i=0;i<n;i++){
		for(int j=s;j>=a[i];j--){
			if(dp[j-a[i]]==true){
				dp[j]=true;
			// chi can xet toi a[i] thoi vi nhung thang be hon a[i] khong can xet nx
			}
		}
	}
	if(dp[s]==true){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
}
