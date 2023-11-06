#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	string s;
	int k;
	getline(cin,s);
	cin>>k;
	vector<char>res;
	for(char x:s)
	{
		res.push_back(char('a' + (x - 'a' - k + 26) % 26));
	}
//	cout<<res.size();
	for(char x:res)
		cout<<x;
}
