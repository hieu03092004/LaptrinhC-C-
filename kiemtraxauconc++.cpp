#include<bits/stdc++.h>
using namespace std;
void xl(string &s){
	for(int i=0;i<s.size();i++){
		if(isupper(s[i]))
			s[i]=tolower(s[i]);
	}
}
void xly1(string &t){
	for(int i=0;i<t.size();i++){
		if(t[i]=='/')
			t[i]=' ';
	}
}
void tach(string t){
	stringstream ss(t);
	string word;
	while(ss>>word){
		if(word.size()<2)
		cout<<"0"<<word<<"/";
		else if(word.size()==4)
		cout<<word;
		else
		cout<<word<<"/";
	}
}
int main(){
	string s;getline(cin,s);
	string t;getline(cin,t);
	xl(s);
	xly1(t);
	stringstream ss(s);
	string word;
	vector<string>v;
	while(ss>>word){
		v.push_back(word);
	}
	for(int i=0;i<v.size();i++){
		string tmp=v[i].substr(1);
		char tmp1=toupper(v[i][0]);
	cout<<tmp1<<tmp<<" ";
	}
	cout<<endl;
	tach(t);
}
