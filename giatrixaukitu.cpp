#include<bits/stdc++.h>
using namespace std;
void xl(string s,int k){
	int cnt[256]={0};
	for(int i=0;i<s.size();i++){
		cnt[s[i]]++;
	}
	int max1=-1e9,res=0;
	for(int i=0;i<256;i++){
		if(cnt[i]!=0){
			res+=pow(cnt[i],2);
			max1=max(max1,cnt[i]);
		}
	}
	if(k==0)
		cout<<res<<endl;
	else{
		res=0;
		for(int i=0;i<256;i++){
			if(cnt[i]!=0){
				res+=pow(cnt[i],2);
				cout<<res<<" ";
			}
			if(cnt[i]==max1){
				cnt[i]=max1-k;
				res+=pow(cnt[i],2);
				res-=pow(cnt[i],2);
				cout<<res<<" ";
			}
		}
		cout<<res<<endl;
	}
}
int main(){
	int n;cin>>n;
	while(n--){
		int k;
		cin>>k;
		string s;cin.ignore();
		getline(cin,s);
		xl(s,k);
	}
}
