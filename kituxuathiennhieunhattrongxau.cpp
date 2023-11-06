#include<bits/stdc++.h>
using namespace std;
int main(){
	int d[256]={0};
	string s;
	getline(cin,s);
	pair<char,int>res;
	pair<char,int>ans;
	int max=-1e9,min=1e9;
	for(int i=0;i<s.size();i++){
		d[s[i]]++;
	}
	for(int i=0;i<256;i++){
		if(d[i]!=0&&d[i]>=max){
			max=d[i];
			res=make_pair(char(i),max);
		}
		if(d[i]!=0&&d[i]<=min){
			min=d[i];
			ans=make_pair(char(i),min);
		}
	}
	cout<<res.first<<" "<<res.second<<" "<<endl<<ans.first<<" "<<ans.second;
}
