#include<bits/stdc++.h>
using namespace std;
int find(string s,char c){
	for(int i=0;i<s.length();i++){
		if(s[i]==c);
		return i;
	}
	return 0;
}
int main(){
	int n;cin>>n;
	map<string,vector<string>>mp;
	scanf("\n");
	for(int i=0;i<n;i++){
		string s;
		getline(cin,s);
		int pos=find(s,'-');
		string t1=s.substr(0,pos-1);// tach xau con
		string t2=s.substr(pos+2);
		mp[t1].push_back(t2);
		mp[t2].push_back(t1);
	}
	for(auto it:mp){
		vector<string>r=it.second;
		sort(r.begin(),r.end());
		cout<<it.first<<":";
		for(int i=0;i<r.size();i++){
			cout<<r[i]<<" ";
			if(i<r.size()-1)
				cout<<",";
		}
		cout<<endl;
	}
}
