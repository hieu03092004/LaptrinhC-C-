#include<bits/stdc++.h>
using namespace std;
void xl(string &s){
	for(int i=0;i<s.size();i++){
		if(isupper(s[i]))
			s[i]=tolower(s[i]);
	}
}
void xlngay(string ngay){
	for(int i=0;i<ngay.size();i++){
		if(ngay[i]=='/')
			ngay[i]=' ';
	}
	stringstream ss(ngay);
	string word;
	while(ss>>word){
		cout<<stoi(word);
	}
	cout<<endl;
}
int main(){
	int n;cin>>n;
	cin.ignore();//xoa ki tu enter
	for(int i=0;i<n;i++){
		string s;getline(cin,s);
		xl(s);
		stringstream ss(s);
		string word;
		vector<string>v;
		while(ss>>word){
			v.push_back(word);
		}
		string ngay=v[v.size()-1];
		//xong xu ly ngay
		string ten=v[v.size()-2];
		cout<<ten;
		for(int i=0;i<=v.size()-3;i++){
			cout<<v[i][0];
		}
		cout<<"@xyz.edu.vn"<<endl;
		xlngay(ngay);
	}
}
