#include<bits/stdc++.h>
using namespace std;
int cnt=0;
map<char,int>mp;
void HN(int n,char a,char b,char c,int k){
	if(cnt==k)
		return;
	if(n==1){
		cnt++;
		mp[a]--;
		mp[b]++;
	}
	else{
		HN(n-1,a,c,b,k);
		if(cnt==k)
			return;
		cnt++;
		mp[a]--;
		mp[b]++;
		HN(n-1,c,b,a,k);
	}
}
int main(){
	int n,k;
	cin>>n>>k;
	mp['x']=n;
	mp['y']=0;
	mp['z']=0;
	HN(n,'x','y','z',k);
	for(auto it:mp)
		cout<<it.second<<" ";
}
