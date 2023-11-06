#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int>a,pair<string,int>b){
	//sap xep theo chieu dai tang dan neu co cung chieu dai thi thang nao co thu tu tu dien nho hon se in ra truoc
		if(a.first==b.first)
		return a.second<b.second;
		return a.first<b.first;//tang dan la thang sau phai be hon thang truoc
}
bool check(string word){
	string tmp=word;
	reverse(tmp.begin(),tmp.end());
	if(tmp==word)
	return true;
	return false;
}
int main(){
	string s;
	getline(cin,s);
	vector<pair<string,int>>ans;
	stringstream ss(s);
	string word;
	int idx=1;
	while(ss>>word){
		if(check(word)){
			ans.push_back({word,idx});
			idx++;
		}
	}
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++){
		if(i!=ans.size()-1){
			cout<<ans[i].first<<" ";
		}
		else
			cout<<ans[i].first;
	}
	cout<<endl;
}
