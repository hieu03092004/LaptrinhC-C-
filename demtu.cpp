#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int cnt=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='.'){
			s[i]=' ';
		}
	}
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
//		cout<<tmp<<" ";
		cnt++;
	}
	cout<<cnt;
}
