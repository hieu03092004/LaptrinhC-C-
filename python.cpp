#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;getline(cin,s);
	int cnt=0;
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	for(int i=0;i<s.size();i++){
		if(s[i]=='p'||s[i]=='y'||s[i]=='t'||s[i]=='h'||s[i]=='o'||s[i]=='n')
			cnt++;
	}
	if(cnt>=7)
		cout<<"NO";
	else
		cout<<"YES";
}
