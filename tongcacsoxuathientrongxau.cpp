#include<bits/stdc++.h>
using namespace std;
string xl(string a){
	int k=0;
	while(k<a.size()-1&& a[k] =='0');
	return a.substr(k);
}
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(!isdigit(s[i])){
			s[i]=' ';
		}
	}
	stringstream ss(s);
	string num;
	string ans="0";
	while(ss>>num){
		num=xl(num);
		cout<<num<<" ";
		if(ans.size()<num.size()||(ans.size()==num.size() && ans<num))
			ans=num;
	}
	cout<<ans;
	return 0;
}
