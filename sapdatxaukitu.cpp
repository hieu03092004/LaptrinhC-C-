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
		max1=max1(max1,d[s[i]]);
		//buoc nao cung cap nhat ket qua ca
	}
	cout<<max1;
}

