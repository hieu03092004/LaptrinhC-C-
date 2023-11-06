#include<bits/stdc++.h>
using namespace std;
void xl1(string a){
	for(int i=0;i<a.size();i++){
		if(a[i]=='/')
		a[i]=' ';
	}
	stringstream ss(a);
	string date;
	while(ss>>date){	
		int tong=stoi(date);
		cout<<tong;
	}
	cout<<endl;
}
void xl(string s){
	for(int i=0;i<s.size();i++){
		if(!islower(s[i]))
			s[i]=tolower(s[i]);
	}
	stringstream ss(s);
	string word;
	vector<string>v;
	while(ss>>word){
		v.push_back(word);
	}
	cout<<v[v.size()-2];
	for(int i=0;i<v.size()-2;i++){
		cout<<v[i][0];
	}
	cout<<"@xyz.edu.vn"<<endl;
	xl1(v[v.size()-1]);
}
int main(){
	int n;
	cin>>n;
	cin.ignore();
	while(n--){
		string s;
		getline(cin,s);
		xl(s);
	}
}
