#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	string s;
	getline(cin,s);
	int d[256]={0};
	int max1=-1e9;
	for(int i=0;i<s.size();i++){
		d[s[i]]++;
		max1=max(max1,d[s[i]]);
		//buoc nao cung cap nhat ket qua ca
	}
	if(max1<=(s.size()-1)/2+1)
	cout<<"YES";
	else
	cout<<"NO";
}

