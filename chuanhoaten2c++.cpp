#include<bits/stdc++.h>
using namespace std;
void xl(string &s){
	for(int i=0;i<s.size();i++)
		if(isupper(s[i]))
			s[i]=tolower(s[i]);
}
void xlten(string &ten){
	for(int i=0;i<ten.size();i++)
		ten[i]=toupper(ten[i]);
}
int main(){
	string s;
	getline(cin,s);
	xl(s);
	stringstream ss(s);
	string word;
	vector<string>v;
	while(ss>>word){
		v.push_back(word);
	}
	string ten=v[v.size()-1];
	xlten(ten);
	for(int i=0;i<=v.size()-2;i++){
		if(i!=v.size()-2){
			string tmp1=v[i].substr(1);
			char tmp=toupper(v[i][0]);
		cout<<tmp<<tmp1<<" ";
	}
		else{
			string tmp1=v[i].substr(1);
			char tmp=toupper(v[i][0]);
		cout<<tmp<<tmp1<<",";
		}
	}
	cout<<" "<<ten<<endl<<ten<<", ";
		for(int i=0;i<=v.size()-2;i++){
		if(i!=v.size()-2){
			string tmp1=v[i].substr(1);
			char tmp=toupper(v[i][0]);
		cout<<tmp<<tmp1<<" ";
	}
		else{
			string tmp1=v[i].substr(1);
			char tmp=toupper(v[i][0]);
		cout<<tmp<<tmp1;
		}
	}
	return 0;
}
