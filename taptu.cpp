#include<bits/stdc++.h>
using namespace std;
set<string>s1;
set<string>s2;
void xls(string &s){
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
}
void xlt(string &t){
	for(int i=0;i<t.size();i++){
		t[i]=tolower(t[i]);
	}
}
void tach(string t){
	stringstream ss(t);
	string word;
	vector<string>v;
	while(ss>>word){
		s2.insert(word);
	}
//	for(auto x:s2)
//		cout<<x<<" ";
//	cout<<endl;
//	for(auto x:s1)
//		cout<<s1;
//	for(int i=0;i<v.size();i++){
//		if(s1.count(v[i])==0){
//			s2.insert(v[i]);
//		}
//	}
	for(auto it=s1.begin();it!=s1.end();it++){
		// hoi xem trong s2 co t khong
		if(s2.count(*it)==0)
			cout<<*it<<" ";
	}
}
int main(){
	string s;getline(cin,s);
	string t;getline(cin,t);
	xls(s);xlt(t);
	stringstream ss(s);
	string word;
	while(ss>>word){
		s1.insert(word);
	}
	tach(t);
}
